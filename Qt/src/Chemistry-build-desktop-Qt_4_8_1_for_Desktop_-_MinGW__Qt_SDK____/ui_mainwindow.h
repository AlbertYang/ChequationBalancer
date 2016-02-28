/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Mar 24 17:35:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *myFrame;
    QPushButton *concernBtn;
    QPushButton *helpBtn;
    QPushButton *cancelBtn;
    QPushButton *solveBtn;
    QLineEdit *inputEdit;
    QLineEdit *outputEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(670, 328);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow#MainWindow{border-image:url(:/file/images/bank.png)}"));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        myFrame = new QFrame(centralWidget);
        myFrame->setObjectName(QString::fromUtf8("myFrame"));
        myFrame->setGeometry(QRect(9, 9, 661, 297));
        myFrame->setStyleSheet(QString::fromUtf8("QFrame#myFrame{border-image:url(:/file/images/mainWindow.png)}"));
        myFrame->setFrameShape(QFrame::StyledPanel);
        myFrame->setFrameShadow(QFrame::Raised);
        concernBtn = new QPushButton(myFrame);
        concernBtn->setObjectName(QString::fromUtf8("concernBtn"));
        concernBtn->setGeometry(QRect(30, 216, 90, 36));
        concernBtn->setCursor(QCursor(Qt::PointingHandCursor));
        concernBtn->setStyleSheet(QString::fromUtf8("QPushButton#concernBtn{border-image:url(:/file/images/che.png)}\n"
"QPushButton#concernBtn:hover{border-image:url(:/file/images/che_hover.png)}\n"
"QPushButton#concernBtn:pressed{border-image:url(:/file/images/che.png)}"));
        helpBtn = new QPushButton(myFrame);
        helpBtn->setObjectName(QString::fromUtf8("helpBtn"));
        helpBtn->setGeometry(QRect(139, 212, 87, 42));
        helpBtn->setCursor(QCursor(Qt::PointingHandCursor));
        helpBtn->setStyleSheet(QString::fromUtf8("QPushButton#helpBtn{border-image:url(:/file/images/help.png)}\n"
"QPushButton#helpBtn:hover{border-image:url(:/file/images/help_hover.png)}\n"
"QPushButton#helpBtn:pressed{border-image:url(:/file/images/help.png)}"));
        cancelBtn = new QPushButton(myFrame);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setGeometry(QRect(240, 210, 90, 43));
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        cancelBtn->setStyleSheet(QString::fromUtf8("QPushButton#cancelBtn{border-image:url(:/file/images/exit.png)}\n"
"QPushButton#cancelBtn:hover{border-image:url(:/file/images/exit_hover.png)}\n"
"QPushButton#cancelBtn:pressed{border-image:url(:/file/images/exit.png)}"));
        solveBtn = new QPushButton(myFrame);
        solveBtn->setObjectName(QString::fromUtf8("solveBtn"));
        solveBtn->setGeometry(QRect(588, 85, 54, 113));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\226\265\345\221\234\344\275\223"));
        font.setPointSize(18);
        solveBtn->setFont(font);
        solveBtn->setCursor(QCursor(Qt::PointingHandCursor));
        solveBtn->setStyleSheet(QString::fromUtf8("QPushButton#solveBtn{border-image:url(:/file/images/solve.png)}\n"
"\n"
"QPushButton#solveBtn:hover{border-image:url(:/file/images/solve_hover.png)}\n"
"\n"
"QPushButton#solveBtn:pressed{border-image:url(:/file/images/solve.png)}"));
        inputEdit = new QLineEdit(myFrame);
        inputEdit->setObjectName(QString::fromUtf8("inputEdit"));
        inputEdit->setGeometry(QRect(150, 97, 381, 30));
        inputEdit->setMaximumSize(QSize(635, 30));
        inputEdit->setFont(font);
        inputEdit->setStyleSheet(QString::fromUtf8("QLineEdit#inputEdit{border-image:url(:/file/images/bank.png)}"));
        outputEdit = new QLineEdit(myFrame);
        outputEdit->setObjectName(QString::fromUtf8("outputEdit"));
        outputEdit->setGeometry(QRect(150, 147, 381, 40));
        outputEdit->setMaximumSize(QSize(16777215, 40));
        outputEdit->setFont(font);
        outputEdit->setStyleSheet(QString::fromUtf8("QLineEdit#outputEdit{border-image:url(:/file/images/bank.png)}"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(cancelBtn, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        concernBtn->setText(QString());
        helpBtn->setText(QString());
        cancelBtn->setText(QString());
        solveBtn->setText(QString());
        inputEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
