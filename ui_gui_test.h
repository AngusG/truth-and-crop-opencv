/********************************************************************************
** Form generated from reading UI file 'gui_testj11634.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef GUI_TESTJ11634_H
#define GUI_TESTJ11634_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TruthAndCrop
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    QLabel *img_view;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *sigmaBox_2;
    QSpinBox *sigmaBox;
    QSpinBox *segmentsBox;
    QSpinBox *compactnessBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *class_other;
    QRadioButton *class_mussel;
    QRadioButton *class_ciona;
    QRadioButton *class_styela;
    QVBoxLayout *verticalLayout_2;
    QPushButton *loadButton;
    QPushButton *cropButton;
    QPushButton *toggleButton;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QTextEdit *imageField;
    QLabel *label_5;
    QTextEdit *inputPathField;
    QLabel *label_4;
    QTextEdit *outputPath;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TruthAndCrop)
    {
        if (TruthAndCrop->objectName().isEmpty())
            TruthAndCrop->setObjectName(QStringLiteral("TruthAndCrop"));
        TruthAndCrop->resize(1200, 923);
        centralwidget = new QWidget(TruthAndCrop);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 881, 791));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 879, 789));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        img_view = new QLabel(scrollAreaWidgetContents_2);
        img_view->setObjectName(QStringLiteral("img_view"));
        img_view->setWordWrap(true);

        horizontalLayout->addWidget(img_view);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(910, 670, 271, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        sigmaBox_2 = new QSpinBox(horizontalLayoutWidget);
        sigmaBox_2->setObjectName(QStringLiteral("sigmaBox_2"));
        sigmaBox_2->setValue(3);

        horizontalLayout_2->addWidget(sigmaBox_2);

        sigmaBox = new QSpinBox(horizontalLayoutWidget);
        sigmaBox->setObjectName(QStringLiteral("sigmaBox"));
        sigmaBox->setValue(3);

        horizontalLayout_2->addWidget(sigmaBox);

        segmentsBox = new QSpinBox(horizontalLayoutWidget);
        segmentsBox->setObjectName(QStringLiteral("segmentsBox"));
        segmentsBox->setMaximum(9999);
        segmentsBox->setValue(200);

        horizontalLayout_2->addWidget(segmentsBox);

        compactnessBox = new QSpinBox(horizontalLayoutWidget);
        compactnessBox->setObjectName(QStringLiteral("compactnessBox"));
        compactnessBox->setValue(3);

        horizontalLayout_2->addWidget(compactnessBox);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(910, 620, 271, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(910, 410, 271, 191));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        class_other = new QRadioButton(horizontalLayoutWidget_3);
        class_other->setObjectName(QStringLiteral("class_other"));

        verticalLayout->addWidget(class_other);

        class_mussel = new QRadioButton(horizontalLayoutWidget_3);
        class_mussel->setObjectName(QStringLiteral("class_mussel"));

        verticalLayout->addWidget(class_mussel);

        class_ciona = new QRadioButton(horizontalLayoutWidget_3);
        class_ciona->setObjectName(QStringLiteral("class_ciona"));

        verticalLayout->addWidget(class_ciona);

        class_styela = new QRadioButton(horizontalLayoutWidget_3);
        class_styela->setObjectName(QStringLiteral("class_styela"));

        verticalLayout->addWidget(class_styela);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        loadButton = new QPushButton(horizontalLayoutWidget_3);
        loadButton->setObjectName(QStringLiteral("loadButton"));

        verticalLayout_2->addWidget(loadButton);

        cropButton = new QPushButton(horizontalLayoutWidget_3);
        cropButton->setObjectName(QStringLiteral("cropButton"));

        verticalLayout_2->addWidget(cropButton);

        toggleButton = new QPushButton(horizontalLayoutWidget_3);
        toggleButton->setObjectName(QStringLiteral("toggleButton"));

        verticalLayout_2->addWidget(toggleButton);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(910, 33, 271, 284));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        imageField = new QTextEdit(verticalLayoutWidget_3);
        imageField->setObjectName(QStringLiteral("imageField"));

        verticalLayout_3->addWidget(imageField);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        inputPathField = new QTextEdit(verticalLayoutWidget_3);
        inputPathField->setObjectName(QStringLiteral("inputPathField"));

        verticalLayout_3->addWidget(inputPathField);

        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        outputPath = new QTextEdit(verticalLayoutWidget_3);
        outputPath->setObjectName(QStringLiteral("outputPath"));

        verticalLayout_3->addWidget(outputPath);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(910, 350, 271, 23));
        progressBar->setValue(24);
        TruthAndCrop->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TruthAndCrop);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 19));
        TruthAndCrop->setMenuBar(menubar);
        statusbar = new QStatusBar(TruthAndCrop);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TruthAndCrop->setStatusBar(statusbar);

        retranslateUi(TruthAndCrop);

        QMetaObject::connectSlotsByName(TruthAndCrop);
    } // setupUi

    void retranslateUi(QMainWindow *TruthAndCrop)
    {
        TruthAndCrop->setWindowTitle(QApplication::translate("TruthAndCrop", "MainWindow", 0));
        img_view->setText(QString());
        label_7->setText(QApplication::translate("TruthAndCrop", "ds", 0));
        label->setText(QApplication::translate("TruthAndCrop", "sigma", 0));
        label_2->setText(QApplication::translate("TruthAndCrop", "segments", 0));
        label_3->setText(QApplication::translate("TruthAndCrop", "compactness", 0));
        class_other->setText(QApplication::translate("TruthAndCrop", "Other", 0));
        class_mussel->setText(QApplication::translate("TruthAndCrop", "Blue Mussel", 0));
        class_ciona->setText(QApplication::translate("TruthAndCrop", "Ciona", 0));
        class_styela->setText(QApplication::translate("TruthAndCrop", "S. Clava", 0));
        loadButton->setText(QApplication::translate("TruthAndCrop", "Load", 0));
        cropButton->setText(QApplication::translate("TruthAndCrop", "Crop", 0));
        toggleButton->setText(QApplication::translate("TruthAndCrop", "Toggle", 0));
        label_6->setText(QApplication::translate("TruthAndCrop", " Image", 0));
        imageField->setHtml(QApplication::translate("TruthAndCrop", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IMG_5351.JPG</p></body></html>", 0));
        label_5->setText(QApplication::translate("TruthAndCrop", " Input Path", 0));
        inputPathField->setHtml(QApplication::translate("TruthAndCrop", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/angus/Documents/1uog/masc/data-acquisition/data/atlantic-aqua-farms-nov-7-2016/aaf-ciona-nov-7-2016</p></body></html>", 0));
        label_4->setText(QApplication::translate("TruthAndCrop", " Output Path", 0));
        outputPath->setHtml(QApplication::translate("TruthAndCrop", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">/home/angus/Desktop</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class TruthAndCrop: public Ui_TruthAndCrop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GUI_TESTJ11634_H
