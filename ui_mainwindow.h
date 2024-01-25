/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *title;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *unameLabel;
    QLineEdit *unameField;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *pwdLabel;
    QLineEdit *pwdField;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *continueBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("#widget{\n"
" background-color: white;\n"
"}\n"
"#continueBtn{\n"
"border-radius: 10px;\n"
"font-weight: bold;\n"
"}\n"
"#pwdField, #unameField{\n"
"border:1px solid blue;\n"
"}\n"
"\n"
"#continueBtn::hover{\n"
"color: blue;\n"
"background-color: transparent;\n"
"border: 1px solid blue;\n"
"border-radius: 10px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QFont font;
        font.setBold(true);
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setBaseSize(QSize(0, 200));
        frame->setStyleSheet(QString::fromUtf8("border:none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        title = new QLabel(frame);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monaco"));
        font1.setPointSize(34);
        font1.setBold(true);
        title->setFont(font1);
        title->setStyleSheet(QString::fromUtf8("color:blue;"));

        horizontalLayout->addWidget(title, 0, Qt::AlignHCenter);


        verticalLayout_2->addWidget(frame, 0, Qt::AlignTop);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(300, 50, 371, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        unameLabel = new QLabel(verticalLayoutWidget);
        unameLabel->setObjectName(QString::fromUtf8("unameLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Code Pro"));
        font2.setPointSize(14);
        unameLabel->setFont(font2);

        verticalLayout_3->addWidget(unameLabel);

        unameField = new QLineEdit(verticalLayoutWidget);
        unameField->setObjectName(QString::fromUtf8("unameField"));
        unameField->setFont(font2);

        verticalLayout_3->addWidget(unameField);

        verticalLayoutWidget_2 = new QWidget(frame_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(300, 180, 371, 80));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pwdLabel = new QLabel(verticalLayoutWidget_2);
        pwdLabel->setObjectName(QString::fromUtf8("pwdLabel"));
        pwdLabel->setFont(font2);

        verticalLayout_4->addWidget(pwdLabel);

        pwdField = new QLineEdit(verticalLayoutWidget_2);
        pwdField->setObjectName(QString::fromUtf8("pwdField"));
        pwdField->setFont(font2);

        verticalLayout_4->addWidget(pwdField);

        horizontalLayoutWidget = new QWidget(frame_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(300, 280, 371, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        continueBtn = new QPushButton(horizontalLayoutWidget);
        continueBtn->setObjectName(QString::fromUtf8("continueBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(continueBtn->sizePolicy().hasHeightForWidth());
        continueBtn->setSizePolicy(sizePolicy1);
        continueBtn->setMinimumSize(QSize(0, 40));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        continueBtn->setFont(font3);
        continueBtn->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"font-size:14;"));

        horizontalLayout_2->addWidget(continueBtn, 0, Qt::AlignBottom);


        verticalLayout_2->addWidget(frame_2);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Login Form With QT C++", nullptr));
        unameLabel->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        pwdLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        continueBtn->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
