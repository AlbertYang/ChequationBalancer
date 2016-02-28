/********************************************************************************
** Form generated from reading UI file 'warnningbox.ui'
**
** Created: Sun Mar 24 17:38:23 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNNINGBOX_H
#define UI_WARNNINGBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_warnningBox
{
public:
    QFrame *warnningFrame;
    QPushButton *iSeeBtn;
    QLabel *warningLabel;

    void setupUi(QDialog *warnningBox)
    {
        if (warnningBox->objectName().isEmpty())
            warnningBox->setObjectName(QString::fromUtf8("warnningBox"));
        warnningBox->resize(559, 202);
        warnningFrame = new QFrame(warnningBox);
        warnningFrame->setObjectName(QString::fromUtf8("warnningFrame"));
        warnningFrame->setGeometry(QRect(10, 10, 543, 186));
        warnningFrame->setStyleSheet(QString::fromUtf8("QFrame#warnningFrame{border-image:url(:/file/images/warnningBox.png)}"));
        warnningFrame->setFrameShape(QFrame::StyledPanel);
        warnningFrame->setFrameShadow(QFrame::Raised);
        iSeeBtn = new QPushButton(warnningFrame);
        iSeeBtn->setObjectName(QString::fromUtf8("iSeeBtn"));
        iSeeBtn->setGeometry(QRect(290, 120, 87, 42));
        iSeeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        iSeeBtn->setStyleSheet(QString::fromUtf8("QPushButton#iSeeBtn{border-image:url(:/file/images/iSee.png)}\n"
"QPushButton#iSeeBtn:hover{border-image:url(:/file/images/iSee_hover.png)}\n"
"QPushButton#iSeeBtn:pressed{border-image:url(:/file/images/iSee.png)}"));
        warningLabel = new QLabel(warnningFrame);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setGeometry(QRect(70, 40, 301, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\226\265\345\221\234\344\275\223"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        warningLabel->setFont(font);
        warningLabel->setStyleSheet(QString::fromUtf8("QLabel#warningLabel{color:rgb(49,38,10)}"));

        retranslateUi(warnningBox);
        QObject::connect(iSeeBtn, SIGNAL(clicked()), warnningBox, SLOT(close()));

        QMetaObject::connectSlotsByName(warnningBox);
    } // setupUi

    void retranslateUi(QDialog *warnningBox)
    {
        warnningBox->setWindowTitle(QApplication::translate("warnningBox", "Dialog", 0, QApplication::UnicodeUTF8));
        iSeeBtn->setText(QString());
        warningLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class warnningBox: public Ui_warnningBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNNINGBOX_H
