#include "QtObjectTracking.h"


void setSignalAndSlot();

QtObjectTracking::QtObjectTracking(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowState(Qt::WindowMaximized);
	setSignalAndSlot();
	
	video.open(0);
	if (video.isOpened()) {
		timer = new QTimer(this);
		timer->start(20); //update every 20 ms
		connect(timer, SIGNAL(timeout()), this, SLOT(processFrame()));
	}
	else {	//fail opening webcam
		ui.OriginImg->setText("Failed");
		ui.OriginImg->setAlignment(Qt::AlignCenter);
		return;
	}


}

QtObjectTracking::~QtObjectTracking()
{

}

void QtObjectTracking::processFrame() {
	cv::Mat frame;
	cv::Mat processed;
	bool succeed = video.read(frame);
	if (succeed) {
		if (start == true) {	//start tracking object
			cv::cvtColor(frame, frame, CV_BGR2HSV);

			cv::inRange(frame, cv::Scalar(ui.lowerHSlider->value(), ui.lowerSSlider->value(), ui.lowerVSlider->value())
				, cv::Scalar(ui.upperHSlider->value(), ui.upperSSlider->value(), ui.upperVSlider->value()), processed);
			
			//openingOperation(processed);
			closingOperation(processed);

			trackObj(processed, frame);

			//Mat 2 Qimage
			cv::cvtColor(frame, frame, CV_HSV2RGB);
			QImage qimgOriginal((uchar*)frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
			QImage qimgProcessed((uchar *)processed.data, processed.cols, processed.rows, processed.step, QImage::Format_Indexed8);
			//display Qimage on label
			ui.OriginImg->setPixmap(QPixmap::fromImage(qimgProcessed));
			ui.ProcessedImg->setPixmap(QPixmap::fromImage(qimgOriginal));
		}
		else {	//pause for adjusting filter
			cv::cvtColor(frame, frame, CV_BGR2HSV);
			cv::inRange(frame, cv::Scalar(ui.lowerHSlider->value(), ui.lowerSSlider->value(), ui.lowerVSlider->value())
				, cv::Scalar(ui.upperHSlider->value(), ui.upperSSlider->value(), ui.upperVSlider->value()), processed);

			//openingOperation(processed);
			closingOperation(processed);

			//Mat 2 Qimage
			QImage qimgProcessed((uchar *)processed.data, processed.cols, processed.rows, processed.step, QImage::Format_Indexed8);
			//display Qimage on label
			ui.OriginImg->setPixmap(QPixmap::fromImage(qimgProcessed));
		}
	}
	else {
		return;
	}
}

void QtObjectTracking::openingOperation(cv::Mat &img) {
	//dilate followed by erode
	cv::Mat erodeMat = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
	cv::Mat dilateMat = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(8, 8));

	erode(img, img, erodeMat);
	erode(img, img, erodeMat);

	dilate(img, img, dilateMat);
	dilate(img, img, dilateMat);
}
void QtObjectTracking::closingOperation(cv::Mat &img) {
	//erode followed by dilate
	cv::Mat erodeMat = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
	cv::Mat dilateMat = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(8, 8));

	dilate(img, img, dilateMat);
	dilate(img, img, dilateMat);

	erode(img, img, erodeMat);
	erode(img, img, erodeMat);
}
void QtObjectTracking::trackObj(const cv::Mat thresholdedImg, cv::Mat &frame) {
	cv::Mat temp;
	thresholdedImg.copyTo(temp);

	std::vector<std::vector<cv::Point>> contours;
	std::vector<cv::Vec4i> hierarchy;	//[Next, Previous, First_Child, Parent]	

	findContours(temp, contours, hierarchy, CV_RETR_LIST, CV_CHAIN_APPROX_SIMPLE);
	/*for more detail about findContours, see the link below
	http://docs.opencv.org/3.1.0/d9/d8b/tutorial_py_contours_hierarchy.html#gsc.tab=0
	*/
	int x, y;
	double area = 0;
	bool objFound = false;

	if (hierarchy.size() > 0) {
		if (hierarchy.size() < 5) {	//If hierarchy.size() is over 5, there may be too many noise.
			for (int i = 0; i >= 0; i = hierarchy[i][0]) {
				cv::Moments moment = cv::moments(contours[i]);
				double area = moment.m00;

				if (area > 50 * 50 && area < 300 * 300) {
					x = moment.m10 / area;
					y = moment.m01 / area;
					objFound = true;
				}
				else {
					objFound = false;
				}
				if (objFound) {
					tagObjectPosition(frame, x, y);
				}
			}
		}
		else
			putText(frame, "TOO MUCH NOISE! ADJUST FILTER", cv::Point(0, 50), 1, 2, cv::Scalar(0, 0, 255), 2);
	}
}
void QtObjectTracking::tagObjectPosition(cv::Mat &frame, int x, int y) {
	circle(frame, cv::Point(x, y), 10, cv::Scalar(0, 0, 255));

	std::ostringstream string;
	string << x << " , " << y;

	putText(frame, string.str(), cv::Point(x, y + 20), 1, 1, cv::Scalar(0, 255, 0));
}


void QtObjectTracking::on_start_pauseButton_clicked() {
	if (start == false) {
		start = true;
		ui.Start_PauseButton->setText("Pause");
	}
	else {
		start = false;
		ui.Start_PauseButton->setText("Start");
	}

}

void QtObjectTracking::setSignalAndSlot() {

	connect(ui.Start_PauseButton, SIGNAL(clicked()), this, SLOT(on_start_pauseButton_clicked()));

	ui.lowerHSlider->setRange(0, 179);
	ui.lowerHSpinBox->setRange(0, 179);
	connect(ui.lowerHSlider, SIGNAL(valueChanged(int)), ui.lowerHSpinBox, SLOT(setValue(int)));
	connect(ui.lowerHSpinBox, SIGNAL(valueChanged(int)), ui.lowerHSlider, SLOT(setValue(int)));

	ui.upperHSlider->setRange(0, 179);
	ui.upperHSpinBox->setRange(0, 179);
	ui.upperHSpinBox->setValue(179);
	ui.upperHSlider->setValue(255);
	connect(ui.upperHSlider, SIGNAL(valueChanged(int)), ui.upperHSpinBox, SLOT(setValue(int)));
	connect(ui.upperHSpinBox, SIGNAL(valueChanged(int)), ui.upperHSlider, SLOT(setValue(int)));

	ui.lowerSSlider->setRange(0, 255);
	ui.lowerSSpinBox->setRange(0, 255);
	connect(ui.lowerSSlider, SIGNAL(valueChanged(int)), ui.lowerSSpinBox, SLOT(setValue(int)));
	connect(ui.lowerSSpinBox, SIGNAL(valueChanged(int)), ui.lowerSSlider, SLOT(setValue(int)));

	ui.upperSSlider->setRange(0, 255);
	ui.upperSSpinBox->setRange(0, 255);
	ui.upperSSpinBox->setValue(255);
	ui.upperSSlider->setValue(255);
	connect(ui.upperSSlider, SIGNAL(valueChanged(int)), ui.upperSSpinBox, SLOT(setValue(int)));
	connect(ui.upperSSpinBox, SIGNAL(valueChanged(int)), ui.upperSSlider, SLOT(setValue(int)));

	ui.lowerVSlider->setRange(0, 255);
	ui.lowerVSpinBox->setRange(0, 255);
	connect(ui.lowerVSlider, SIGNAL(valueChanged(int)), ui.lowerVSpinBox, SLOT(setValue(int)));
	connect(ui.lowerVSpinBox, SIGNAL(valueChanged(int)), ui.lowerVSlider, SLOT(setValue(int)));

	ui.upperVSlider->setRange(0, 255);
	ui.upperVSpinBox->setRange(0, 255);
	ui.upperVSlider->setValue(255);
	ui.upperVSpinBox->setValue(255);
	connect(ui.upperVSlider, SIGNAL(valueChanged(int)), ui.upperVSpinBox, SLOT(setValue(int)));
	connect(ui.upperVSpinBox, SIGNAL(valueChanged(int)), ui.upperVSlider, SLOT(setValue(int)));
}