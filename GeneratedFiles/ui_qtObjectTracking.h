/********************************************************************************
** Form generated from reading UI file 'qtObjectTracking.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTOBJECTTRACKING_H
#define UI_QTOBJECTTRACKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtTestClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *OriginImg;
    QLabel *ProcessedImg;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lowerH;
    QSlider *lowerHSlider;
    QSpinBox *lowerHSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *upperH;
    QSlider *upperHSlider;
    QSpinBox *upperHSpinBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lowerS;
    QSlider *lowerSSlider;
    QSpinBox *lowerSSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *upperS;
    QSlider *upperSSlider;
    QSpinBox *upperSSpinBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lowerV;
    QSlider *lowerVSlider;
    QSpinBox *lowerVSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *upperV;
    QSlider *upperVSlider;
    QSpinBox *upperVSpinBox;
    QPushButton *Start_PauseButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtTestClass)
    {
        if (QtTestClass->objectName().isEmpty())
            QtTestClass->setObjectName(QStringLiteral("QtTestClass"));
        QtTestClass->resize(757, 529);
        centralWidget = new QWidget(QtTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        OriginImg = new QLabel(centralWidget);
        OriginImg->setObjectName(QStringLiteral("OriginImg"));

        horizontalLayout_7->addWidget(OriginImg);

        ProcessedImg = new QLabel(centralWidget);
        ProcessedImg->setObjectName(QStringLiteral("ProcessedImg"));

        horizontalLayout_7->addWidget(ProcessedImg);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lowerH = new QLabel(centralWidget);
        lowerH->setObjectName(QStringLiteral("lowerH"));

        horizontalLayout_2->addWidget(lowerH);

        lowerHSlider = new QSlider(centralWidget);
        lowerHSlider->setObjectName(QStringLiteral("lowerHSlider"));
        lowerHSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(lowerHSlider);

        lowerHSpinBox = new QSpinBox(centralWidget);
        lowerHSpinBox->setObjectName(QStringLiteral("lowerHSpinBox"));

        horizontalLayout_2->addWidget(lowerHSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        upperH = new QLabel(centralWidget);
        upperH->setObjectName(QStringLiteral("upperH"));

        horizontalLayout_3->addWidget(upperH);

        upperHSlider = new QSlider(centralWidget);
        upperHSlider->setObjectName(QStringLiteral("upperHSlider"));
        upperHSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(upperHSlider);

        upperHSpinBox = new QSpinBox(centralWidget);
        upperHSpinBox->setObjectName(QStringLiteral("upperHSpinBox"));

        horizontalLayout_3->addWidget(upperHSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_8->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lowerS = new QLabel(centralWidget);
        lowerS->setObjectName(QStringLiteral("lowerS"));

        horizontalLayout_4->addWidget(lowerS);

        lowerSSlider = new QSlider(centralWidget);
        lowerSSlider->setObjectName(QStringLiteral("lowerSSlider"));
        lowerSSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(lowerSSlider);

        lowerSSpinBox = new QSpinBox(centralWidget);
        lowerSSpinBox->setObjectName(QStringLiteral("lowerSSpinBox"));

        horizontalLayout_4->addWidget(lowerSSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        upperS = new QLabel(centralWidget);
        upperS->setObjectName(QStringLiteral("upperS"));

        horizontalLayout_5->addWidget(upperS);

        upperSSlider = new QSlider(centralWidget);
        upperSSlider->setObjectName(QStringLiteral("upperSSlider"));
        upperSSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(upperSSlider);

        upperSSpinBox = new QSpinBox(centralWidget);
        upperSSpinBox->setObjectName(QStringLiteral("upperSSpinBox"));

        horizontalLayout_5->addWidget(upperSSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_8->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lowerV = new QLabel(centralWidget);
        lowerV->setObjectName(QStringLiteral("lowerV"));

        horizontalLayout_6->addWidget(lowerV);

        lowerVSlider = new QSlider(centralWidget);
        lowerVSlider->setObjectName(QStringLiteral("lowerVSlider"));
        lowerVSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(lowerVSlider);

        lowerVSpinBox = new QSpinBox(centralWidget);
        lowerVSpinBox->setObjectName(QStringLiteral("lowerVSpinBox"));

        horizontalLayout_6->addWidget(lowerVSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        upperV = new QLabel(centralWidget);
        upperV->setObjectName(QStringLiteral("upperV"));

        horizontalLayout->addWidget(upperV);

        upperVSlider = new QSlider(centralWidget);
        upperVSlider->setObjectName(QStringLiteral("upperVSlider"));
        upperVSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(upperVSlider);

        upperVSpinBox = new QSpinBox(centralWidget);
        upperVSpinBox->setObjectName(QStringLiteral("upperVSpinBox"));

        horizontalLayout->addWidget(upperVSpinBox);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_8->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        Start_PauseButton = new QPushButton(centralWidget);
        Start_PauseButton->setObjectName(QStringLiteral("Start_PauseButton"));

        gridLayout->addWidget(Start_PauseButton, 1, 1, 1, 1);

        QtTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 757, 21));
        QtTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtTestClass->setStatusBar(statusBar);
        QWidget::setTabOrder(Start_PauseButton, upperHSlider);
        QWidget::setTabOrder(upperHSlider, upperHSpinBox);
        QWidget::setTabOrder(upperHSpinBox, lowerSSlider);
        QWidget::setTabOrder(lowerSSlider, lowerSSpinBox);
        QWidget::setTabOrder(lowerSSpinBox, upperSSlider);
        QWidget::setTabOrder(upperSSlider, upperSSpinBox);
        QWidget::setTabOrder(upperSSpinBox, lowerVSpinBox);
        QWidget::setTabOrder(lowerVSpinBox, upperVSlider);
        QWidget::setTabOrder(upperVSlider, upperVSpinBox);

        retranslateUi(QtTestClass);

        QMetaObject::connectSlotsByName(QtTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtTestClass)
    {
        QtTestClass->setWindowTitle(QApplication::translate("QtTestClass", "QtTest", 0));
        OriginImg->setText(QString());
        ProcessedImg->setText(QString());
        lowerH->setText(QApplication::translate("QtTestClass", "lowerH", 0));
        upperH->setText(QApplication::translate("QtTestClass", "upperH", 0));
        lowerS->setText(QApplication::translate("QtTestClass", "lowerS", 0));
        upperS->setText(QApplication::translate("QtTestClass", "upperS", 0));
        lowerV->setText(QApplication::translate("QtTestClass", "lowerV", 0));
        upperV->setText(QApplication::translate("QtTestClass", "upperV", 0));
        Start_PauseButton->setText(QApplication::translate("QtTestClass", "Start", 0));
    } // retranslateUi

};

namespace Ui {
    class QtTestClass: public Ui_QtTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOBJECTTRACKING_H
