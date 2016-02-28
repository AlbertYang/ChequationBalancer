/********************************************************************************
** Form generated from reading UI file 'help_dlg.ui'
**
** Created: Sun Mar 24 18:04:59 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_DLG_H
#define UI_HELP_DLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_help_dlg
{
public:
    QFrame *helpFrame;
    QLabel *titleLabel;
    QTextEdit *helpEdit;
    QPushButton *iSeeBtn;
    QLabel *titleLabel_2;

    void setupUi(QDialog *help_dlg)
    {
        if (help_dlg->objectName().isEmpty())
            help_dlg->setObjectName(QString::fromUtf8("help_dlg"));
        help_dlg->resize(513, 589);
        helpFrame = new QFrame(help_dlg);
        helpFrame->setObjectName(QString::fromUtf8("helpFrame"));
        helpFrame->setGeometry(QRect(0, 0, 512, 588));
        helpFrame->setStyleSheet(QString::fromUtf8("QFrame#helpFrame{border-image:url(:/file/images/help_bkg.png)}"));
        helpFrame->setFrameShape(QFrame::StyledPanel);
        helpFrame->setFrameShadow(QFrame::Raised);
        titleLabel = new QLabel(helpFrame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(70, 40, 151, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\226\265\345\221\234\344\275\223"));
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel{color:rgb(241,249,234)}"));
        helpEdit = new QTextEdit(helpFrame);
        helpEdit->setObjectName(QString::fromUtf8("helpEdit"));
        helpEdit->setGeometry(QRect(20, 160, 471, 361));
        helpEdit->setStyleSheet(QString::fromUtf8("QTextEdit#helpEdit{border-image:url(:/file/images/bank.png)}"));
        iSeeBtn = new QPushButton(helpFrame);
        iSeeBtn->setObjectName(QString::fromUtf8("iSeeBtn"));
        iSeeBtn->setGeometry(QRect(210, 530, 87, 42));
        iSeeBtn->setStyleSheet(QString::fromUtf8("QPushButton#iSeeBtn{border-image:url(:/file/images/iSee.png)}\n"
"QPushButton#iSeeBtn:hover{border-image:url(:/file/images/iSee_hover.png)}\n"
"QPushButton#iSeeBtn:pressed{border-image:url(:/file/images/iSee.png)}"));
        titleLabel_2 = new QLabel(helpFrame);
        titleLabel_2->setObjectName(QString::fromUtf8("titleLabel_2"));
        titleLabel_2->setGeometry(QRect(150, 90, 91, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\226\265\345\221\234\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        titleLabel_2->setFont(font1);
        titleLabel_2->setStyleSheet(QString::fromUtf8("QLabel#titleLabel_2{color:rgb(241,249,234)}"));

        retranslateUi(help_dlg);
        QObject::connect(iSeeBtn, SIGNAL(clicked()), help_dlg, SLOT(close()));

        QMetaObject::connectSlotsByName(help_dlg);
    } // setupUi

    void retranslateUi(QDialog *help_dlg)
    {
        help_dlg->setWindowTitle(QApplication::translate("help_dlg", "Dialog", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("help_dlg", "\345\270\256  \345\212\251", 0, QApplication::UnicodeUTF8));
        helpEdit->setHtml(QApplication::translate("help_dlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">\343\200\220\345\260\217\347\247\230\345\257\206\343\200\221</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">\345\221\250\346\234\237\350\241\250\345\217\257\344\273\245\345\275\223\351\224\256\347\233\230\347\224\250\346\235\245\350\276\223\345\205\245\347\232\204\345\221\246~~\357\274\201</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#f1f9ea;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">\343\200\220\346\226\271\347\250\213\345\274\217\347\232\204\350\241\250\347\244\272\350\247\204\345\210\231\343\200\221</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#f1f9ea;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">\357\274\221\343\200\201\345\277\205\351\241\273\344\275\277\347\224\250\345\205\203\347\264\240\345\221\250\346\234\237\350\241\250\344\270\255\347\232\204\345\205\203\347\264\240\357\274\214\350\257\267\346\263\250\346\204\217\345\244\247\345\260\217\345\206"
                        "\231\357\274\214\344\270\215\345\217\257\344\275\277\347\224\250\345\255\227\346\257\215\344\273\243\346\233\277\346\237\220\347\261\273\345\205\203\347\264\240\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">          H                                                  He</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">          Li Be                               B  C  N  O  F  Ne</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">          Na Mg                               Al Si P  S  Cl Ar</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">          K  Ca Sc Ti V  Cr Mn Fe Co Ni Cu Zn Ga Ge As Se Br Kr</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">          Rb Sr Y  Zr Nb Mo Tc Ru Rh Pd Ag Cd In Sn Sb Te I  Xe</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">          Cs Ba    Hf Ta W  Re Os Ir Pt Au Hg Tl Pb Bi Po At Rn</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">          Fr Ra    Rf Ha UnhUnsUnoUne</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; "
                        "color:#f1f9ea;\">               La Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">               Ac Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#f1f9ea;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">\357\274\222\302\267\345\214\226\345\255\246\345\274\217\345\217\257\346\214\211\350\247\204\345\210\231\350\276\223\345\205\245\357\274\214\345\246\202\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; co"
                        "lor:#f1f9ea;\">      \350\277\207\346\260\247\345\214\226\351\222\240            Na2O2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">      \347\242\261\345\274\217\347\242\263\351\205\270\351\225\201          Mg2(OH)2CO3</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#f1f9ea;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">    \346\234\211\346\234\272\347\211\251\345\217\257\344\273\245\347\256\200\345\214\226\350\276\223\345\205\245\357\274\214\345\246\202\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style"
                        "=\" font-size:10pt; color:#f1f9ea;\">      \351\202\273\347\276\237\345\237\272\350\213\257\347\224\262\351\205\270\351\222\240      C6H4OHCOONa \346\210\226 C7H5O2Na</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">      \350\221\241\350\220\204\347\263\226             CH2OHCHOHCHOHCHOHCHOHCHO \346\210\226 (CH2O)6</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#f1f9ea;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">\357\274\223\302\267\345\220\204\347\211\251\350\264\250\344\271\213\351\227\264\347\224\250\357\274\213\350\277\236\346\216\245\357\274\214\346\226\271\347\250\213\345\274\217\344\270\255\351\227\264\347"
                        "\224\250\357\274\235\357\274\214\345\260\275\347\256\241\350\277\230\346\262\241\346\234\211\351\205\215\345\271\263\357\274\214\344\275\206\351\234\200\346\230\216\347\241\256\345\217\215\345\272\224\347\211\251\344\270\216\344\272\247\347\211\251\357\274\214\345\246\202\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">          H2+Ca(CN)2+NaAlF4+FeSO4+MgSiO3+KI+H3PO4+PbCrO4+BrCl+CF2Cl2+SO2=PbBr2+CrCl3+MgCO3+KAl(OH)4+Fe(SCN)3+PI3+NaSiO3+CaF2+H2O</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">          P4+P2I4+H2O=H3PO4+PH4I</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">          CrI3+Cl2+KOH=K2C"
                        "rO4+KIO3+KCl+H2O</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#f1f9ea;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">\343\200\220\346\265\213\350\257\225\346\226\271\347\250\213\345\274\217\343\200\221</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	Fe + O2 = Fe3O4</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	HNO3+Fe=Fe(NO3)3+NH4NO3+H2O</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><sp"
                        "an style=\" font-size:10pt; color:#f1f9ea;\">	HNO3+Fe=Fe(NO3)3+N2+H2O</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	Al+H2SO4=Al2(SO4)3+H2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	O2=O3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	Cu2(OH)2CO3 = CuO + H2O + CO2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	Cu+HNO3=Cu(NO3)2+H2O+NO</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"
                        "\"><span style=\" font-size:10pt; color:#f1f9ea;\">	P+KOH+H2O=PH3+KH2PO2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	P+CuSO4+H2O=Cu3P+H3PO4+H2SO4</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	Na2CO3+AlCl3+H2O=Al(OH)3+CO2+NaCl</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	CH3CHO+Ag(NH3)2OH=CH3COONH4+Ag+NH3+H2O</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	Fe3C+HNO3=Fe(NO3)3+CO2+NO2+H2O </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px;"
                        " margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	P2I4+P4+H2O=PH4I+H3PO4</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	NaPbF6=NaPbF4+F2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	(NH2)2CO=C3H6N6+NH3+CO2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	SiHCl3+TiF4=SiHF3+TiCl4</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	CS2+Cl2=CCl4+S2Cl2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-le"
                        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	NH4NO3=HNO3+N2+H2O</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	CuCl2+Ca(OH)2=Cu(OH)2+CaCl2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	CuCl2+NaOH=Cu(OH)2+NaCl</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#f1f9ea;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">\343\200\220\345\207\272\347\216\260\345\205\203\347\264\240\345\221\250\346\234\237\350\241\250\344"
                        "\270\255\344\270\215\345\255\230\345\234\250\347\232\204\345\205\203\347\264\240\357\274\214\347\250\213\345\272\217\344\274\232\346\212\245\351\224\231\343\200\221</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	A2B=AB+B</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#f1f9ea;\">	AB3+C7F5+D=A(B2(FC)5A(BC)2)3D </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#f1f9ea;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        iSeeBtn->setText(QString());
        titleLabel_2->setText(QApplication::translate("help_dlg", "by\346\235\250\347\205\247\351\200\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class help_dlg: public Ui_help_dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_DLG_H
