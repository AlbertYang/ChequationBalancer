#include "keyboard.h"
#include "ui_keyboard.h"

#include <iostream>
#include <string>
using namespace std;
QString s2q(const string &s);
string q2s(const QString &s);

keyboard::keyboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::keyboard)
{
    ui->setupUi(this);
}

keyboard::~keyboard()
{
    delete ui;
}

void keyboard::setEdit(QLineEdit* edit){
    output = edit;
}

void keyboard::on_pushButton_clicked()
{
    string ele = q2s(output->text());
    ele+="H";
    output->setText(s2q(ele));
}


//´°¿ÚÍÏ¶¯
void keyboard::mousePressEvent(QMouseEvent *e)
{
    last = e->globalPos();
}

void keyboard::mouseMoveEvent(QMouseEvent *e)
{
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();

    last = e->globalPos();
    move(x()+dx, y()+dy);
}

void keyboard::mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();

    move(x()+dx, y()+dy);
}

void keyboard::on_oneBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="1";
    output->setText(s2q(ele));
}

void keyboard::on_twoBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="2";
    output->setText(s2q(ele));
}

void keyboard::on_threeBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="3";
    output->setText(s2q(ele));
}

void keyboard::on_fourBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="4";
    output->setText(s2q(ele));
}

void keyboard::on_fiveBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="5";
    output->setText(s2q(ele));
}

void keyboard::on_sixBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="6";
    output->setText(s2q(ele));
}

void keyboard::on_sevenBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="7";
    output->setText(s2q(ele));
}

void keyboard::on_eightBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="8";
    output->setText(s2q(ele));
}

void keyboard::on_nineBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="9";
    output->setText(s2q(ele));
}

void keyboard::on_zeroBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="0";
    output->setText(s2q(ele));
}

void keyboard::on_plusBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="+";
    output->setText(s2q(ele));
}

void keyboard::on_equalBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="=";
    output->setText(s2q(ele));
}

void keyboard::on_leftBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="(";
    output->setText(s2q(ele));
}

void keyboard::on_rightBtn_clicked()
{
    string ele = q2s(output->text());
    ele+=")";
    output->setText(s2q(ele));
}

void keyboard::on_spaceBtn_clicked()
{
    string ele = q2s(output->text());
    ele+=" ";
    output->setText(s2q(ele));
}

void keyboard::on_delBtn_clicked()
{
    string ele = q2s(output->text());
    if(ele!=""){
        string delEle="";
        for(int i=0;i<ele.length()-1;i++)
            delEle+=ele[i];
        output->setText(s2q(delEle));
    }
}

void keyboard::on_LiBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Li";
    output->setText(s2q(ele));
}

void keyboard::on_NaBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Na";
    output->setText(s2q(ele));
}

void keyboard::on_KBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="K";
    output->setText(s2q(ele));
}

void keyboard::on_RbBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Rb";
    output->setText(s2q(ele));
}

void keyboard::on_CsBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Cs";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Fr";
    output->setText(s2q(ele));
}

void keyboard::on_BeBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Be";
    output->setText(s2q(ele));
}

void keyboard::on_MgBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Mg";
    output->setText(s2q(ele));
}

void keyboard::on_CaBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Ca";
    output->setText(s2q(ele));
}

void keyboard::on_SrBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Sr";
    output->setText(s2q(ele));
}

void keyboard::on_BaBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Ba";
    output->setText(s2q(ele));
}

void keyboard::on_RaBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Ra";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Sc";
    output->setText(s2q(ele));
}

void keyboard::on_YBtn_clicked()
{
    string ele = q2s(output->text());
    ele+="Y";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_2_clicked()
{
    string ele = q2s(output->text());
    ele+="Ti";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_3_clicked()
{
    string ele = q2s(output->text());
    ele+="Zr";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_4_clicked()
{
    string ele = q2s(output->text());
    ele+="Hf";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_5_clicked()
{
    string ele = q2s(output->text());
    ele+="Rf";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_6_clicked()
{
    string ele = q2s(output->text());
    ele+="V";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_7_clicked()
{
    string ele = q2s(output->text());
    ele+="Nb";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_8_clicked()
{
    string ele = q2s(output->text());
    ele+="Ta";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_9_clicked()
{
    string ele = q2s(output->text());
    ele+="Db";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_10_clicked()
{
    string ele = q2s(output->text());
    ele+="Cr";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_11_clicked()
{
    string ele = q2s(output->text());
    ele+="Mo";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_12_clicked()
{
    string ele = q2s(output->text());
    ele+="W";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_13_clicked()
{
    string ele = q2s(output->text());
    ele+="Sg";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_20_clicked()
{
    string ele = q2s(output->text());
    ele+="Mn";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_19_clicked()
{
    string ele = q2s(output->text());
    ele+="Tc";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_18_clicked()
{
    string ele = q2s(output->text());
    ele+="Re";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_17_clicked()
{
    string ele = q2s(output->text());
    ele+="Bh";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_22_clicked()
{
    string ele = q2s(output->text());
    ele+="Fe";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_24_clicked()
{
    string ele = q2s(output->text());
    ele+="Ru";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_23_clicked()
{
    string ele = q2s(output->text());
    ele+="Os";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_21_clicked()
{
    string ele = q2s(output->text());
    ele+="Hs";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_26_clicked()
{
    string ele = q2s(output->text());
    ele+="Co";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_27_clicked()
{
    string ele = q2s(output->text());
    ele+="Rh";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_28_clicked()
{
    string ele = q2s(output->text());
    ele+="Ir";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_25_clicked()
{
    string ele = q2s(output->text());
    ele+="Mt";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_29_clicked()
{
    string ele = q2s(output->text());
    ele+="Ni";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_30_clicked()
{
    string ele = q2s(output->text());
    ele+="Pd";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_32_clicked()
{
    string ele = q2s(output->text());
    ele+="Pt";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_31_clicked()
{
    string ele = q2s(output->text());
    ele+="Ds";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_36_clicked()
{
    string ele = q2s(output->text());
    ele+="Cu";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_35_clicked()
{
    string ele = q2s(output->text());
    ele+="Ag";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_34_clicked()
{
    string ele = q2s(output->text());
    ele+="Au";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_33_clicked()
{
    string ele = q2s(output->text());
    ele+="Rg";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_38_clicked()
{
    string ele = q2s(output->text());
    ele+="Zn";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_39_clicked()
{
    string ele = q2s(output->text());
    ele+="Cd";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_40_clicked()
{
    string ele = q2s(output->text());
    ele+="Hg";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_37_clicked()
{
    string ele = q2s(output->text());
    ele+="Cn";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_85_clicked()
{
    string ele = q2s(output->text());
    ele+="B";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_86_clicked()
{
    string ele = q2s(output->text());
    ele+="Al";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_84_clicked()
{
    string ele = q2s(output->text());
    ele+="Ga";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_82_clicked()
{
    string ele = q2s(output->text());
    ele+="In";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_83_clicked()
{
    string ele = q2s(output->text());
    ele+="Tl";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_81_clicked()
{
    string ele = q2s(output->text());
    ele+="Uut";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_87_clicked()
{
    string ele = q2s(output->text());
    ele+="C";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_92_clicked()
{
    string ele = q2s(output->text());
    ele+="Si";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_91_clicked()
{
    string ele = q2s(output->text());
    ele+="Ge";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_90_clicked()
{
    string ele = q2s(output->text());
    ele+="Sn";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_89_clicked()
{
    string ele = q2s(output->text());
    ele+="Pb";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_88_clicked()
{
    string ele = q2s(output->text());
    ele+="Uuq";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_97_clicked()
{
    string ele = q2s(output->text());
    ele+="N";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_95_clicked()
{
    string ele = q2s(output->text());
    ele+="P";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_96_clicked()
{
    string ele = q2s(output->text());
    ele+="As";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_98_clicked()
{
    string ele = q2s(output->text());
    ele+="Sb";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_94_clicked()
{
    string ele = q2s(output->text());
    ele+="Bi";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_93_clicked()
{
    string ele = q2s(output->text());
    ele+="Uup";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_104_clicked()
{
    string ele = q2s(output->text());
    ele+="O";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_102_clicked()
{
    string ele = q2s(output->text());
    ele+="S";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_100_clicked()
{
    string ele = q2s(output->text());
    ele+="Se";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_103_clicked()
{
    string ele = q2s(output->text());
    ele+="Te";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_101_clicked()
{
    string ele = q2s(output->text());
    ele+="Po";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_99_clicked()
{
    string ele = q2s(output->text());
    ele+="Uuh";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_106_clicked()
{
    string ele = q2s(output->text());
    ele+="F";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_108_clicked()
{
    string ele = q2s(output->text());
    ele+="Cl";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_109_clicked()
{
    string ele = q2s(output->text());
    ele+="Br";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_107_clicked()
{
    string ele = q2s(output->text());
    ele+="I";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_110_clicked()
{
    string ele = q2s(output->text());
    ele+="At";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_105_clicked()
{
    string ele = q2s(output->text());
    ele+="Uus";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_117_clicked()
{
    string ele = q2s(output->text());
    ele+="He";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_116_clicked()
{
    string ele = q2s(output->text());
    ele+="Ne";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_114_clicked()
{
    string ele = q2s(output->text());
    ele+="Ar";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_115_clicked()
{
    string ele = q2s(output->text());
    ele+="Kr";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_112_clicked()
{
    string ele = q2s(output->text());
    ele+="Xe";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_113_clicked()
{
    string ele = q2s(output->text());
    ele+="Rn";
    output->setText(s2q(ele));
}

void keyboard::on_ScBtn_111_clicked()
{
    string ele = q2s(output->text());
    ele+="Uuo";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_4_clicked()
{
    string ele = q2s(output->text());
    ele+="La";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_5_clicked()
{
    string ele = q2s(output->text());
    ele+="Ce";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_6_clicked()
{
    string ele = q2s(output->text());
    ele+="Pr";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_7_clicked()
{
    string ele = q2s(output->text());
    ele+="Nd";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_8_clicked()
{
    string ele = q2s(output->text());
    ele+="Pm";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_9_clicked()
{
    string ele = q2s(output->text());
    ele+="Sm";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_10_clicked()
{
    string ele = q2s(output->text());
    ele+="Eu";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_11_clicked()
{
    string ele = q2s(output->text());
    ele+="Gd";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_12_clicked()
{
    string ele = q2s(output->text());
    ele+="Tb";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_13_clicked()
{
    string ele = q2s(output->text());
    ele+="Dy";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_14_clicked()
{
    string ele = q2s(output->text());
    ele+="Ho";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_15_clicked()
{
    string ele = q2s(output->text());
    ele+="Er";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_16_clicked()
{
    string ele = q2s(output->text());
    ele+="Tm";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_17_clicked()
{
    string ele = q2s(output->text());
    ele+="Yb";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_18_clicked()
{
    string ele = q2s(output->text());
    ele+="Lu";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_19_clicked()
{
    string ele = q2s(output->text());
    ele+="Ac";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_26_clicked()
{
    string ele = q2s(output->text());
    ele+="Th";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_30_clicked()
{
    string ele = q2s(output->text());
    ele+="Pa";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_24_clicked()
{
    string ele = q2s(output->text());
    ele+="U";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_28_clicked()
{
    string ele = q2s(output->text());
    ele+="Np";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_32_clicked()
{
    string ele = q2s(output->text());
    ele+="Pu";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_21_clicked()
{
    string ele = q2s(output->text());
    ele+="Am";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_23_clicked()
{
    string ele = q2s(output->text());
    ele+="Cm";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_27_clicked()
{
    string ele = q2s(output->text());
    ele+="Bk";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_31_clicked()
{
    string ele = q2s(output->text());
    ele+="Cf";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_20_clicked()
{
    string ele = q2s(output->text());
    ele+="Es";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_22_clicked()
{
    string ele = q2s(output->text());
    ele+="Fm";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_25_clicked()
{
    string ele = q2s(output->text());
    ele+="Md";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_29_clicked()
{
    string ele = q2s(output->text());
    ele+="No";
    output->setText(s2q(ele));
}

void keyboard::on_FrBtn_33_clicked()
{
    string ele = q2s(output->text());
    ele+="Lr";
    output->setText(s2q(ele));
}
