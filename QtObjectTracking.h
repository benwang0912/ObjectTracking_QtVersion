#ifndef QTOBJECTTRACKING_H
#define QTOBJECTTRACKING_H

#include <QtWidgets/QMainWindow>
#include "ui_qtObjectTracking.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "QtCore"
#include "Qtimer"
class QtObjectTracking : public QMainWindow
{
	Q_OBJECT

public:
	QtObjectTracking(QWidget *parent = 0);
	~QtObjectTracking();
	
private:
	Ui::QtTestClass ui;
	cv::VideoCapture video;

	QTimer *timer;

	bool start = false;
	void setSignalAndSlot();

	private slots:
	void on_start_pauseButton_clicked();
	void processFrame();
	void openingOperation(cv::Mat &img);
	void closingOperation(cv::Mat &img);
	void trackObj(const cv::Mat thresholdedImg, cv::Mat &frame);
	void tagObjectPosition(cv::Mat &frame, int x, int y);
};

#endif // QTEDGEDETECTION_H
