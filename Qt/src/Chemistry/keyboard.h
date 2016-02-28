#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QWidget>
#include<QLineEdit>
#include <QMouseEvent>

namespace Ui {
class keyboard;
}

class keyboard : public QWidget
{
    Q_OBJECT
    
public:
    explicit keyboard(QWidget *parent = 0);
    void setEdit(QLineEdit* edit);
    ~keyboard();
    
private slots:
    void on_pushButton_clicked();

    void on_oneBtn_clicked();

    void on_twoBtn_clicked();

    void on_threeBtn_clicked();

    void on_fourBtn_clicked();

    void on_fiveBtn_clicked();

    void on_sixBtn_clicked();

    void on_sevenBtn_clicked();

    void on_eightBtn_clicked();

    void on_nineBtn_clicked();

    void on_zeroBtn_clicked();

    void on_plusBtn_clicked();

    void on_equalBtn_clicked();

    void on_leftBtn_clicked();

    void on_rightBtn_clicked();

    void on_spaceBtn_clicked();

    void on_delBtn_clicked();

    void on_LiBtn_clicked();

    void on_NaBtn_clicked();

    void on_KBtn_clicked();

    void on_RbBtn_clicked();

    void on_CsBtn_clicked();

    void on_FrBtn_clicked();

    void on_BeBtn_clicked();

    void on_MgBtn_clicked();

    void on_CaBtn_clicked();

    void on_SrBtn_clicked();

    void on_BaBtn_clicked();

    void on_RaBtn_clicked();

    void on_ScBtn_clicked();

    void on_YBtn_clicked();

    void on_ScBtn_2_clicked();

    void on_ScBtn_3_clicked();

    void on_ScBtn_4_clicked();

    void on_ScBtn_5_clicked();

    void on_ScBtn_6_clicked();

    void on_ScBtn_7_clicked();

    void on_ScBtn_8_clicked();

    void on_ScBtn_9_clicked();

    void on_ScBtn_10_clicked();

    void on_ScBtn_11_clicked();

    void on_ScBtn_12_clicked();

    void on_ScBtn_13_clicked();

    void on_ScBtn_20_clicked();

    void on_ScBtn_19_clicked();

    void on_ScBtn_18_clicked();

    void on_ScBtn_17_clicked();

    void on_ScBtn_22_clicked();

    void on_ScBtn_24_clicked();

    void on_ScBtn_23_clicked();

    void on_ScBtn_21_clicked();

    void on_ScBtn_26_clicked();

    void on_ScBtn_27_clicked();

    void on_ScBtn_28_clicked();

    void on_ScBtn_25_clicked();

    void on_ScBtn_29_clicked();

    void on_ScBtn_30_clicked();

    void on_ScBtn_32_clicked();

    void on_ScBtn_31_clicked();

    void on_ScBtn_36_clicked();

    void on_ScBtn_35_clicked();

    void on_ScBtn_34_clicked();

    void on_ScBtn_33_clicked();

    void on_ScBtn_38_clicked();

    void on_ScBtn_39_clicked();

    void on_ScBtn_40_clicked();

    void on_ScBtn_37_clicked();

    void on_ScBtn_85_clicked();

    void on_ScBtn_86_clicked();

    void on_ScBtn_84_clicked();

    void on_ScBtn_82_clicked();

    void on_ScBtn_83_clicked();

    void on_ScBtn_81_clicked();

    void on_ScBtn_87_clicked();

    void on_ScBtn_92_clicked();

    void on_ScBtn_91_clicked();

    void on_ScBtn_90_clicked();

    void on_ScBtn_89_clicked();

    void on_ScBtn_88_clicked();

    void on_ScBtn_97_clicked();

    void on_ScBtn_95_clicked();

    void on_ScBtn_96_clicked();

    void on_ScBtn_98_clicked();

    void on_ScBtn_94_clicked();

    void on_ScBtn_93_clicked();

    void on_ScBtn_104_clicked();

    void on_ScBtn_102_clicked();

    void on_ScBtn_100_clicked();

    void on_ScBtn_103_clicked();

    void on_ScBtn_101_clicked();

    void on_ScBtn_99_clicked();

    void on_ScBtn_106_clicked();

    void on_ScBtn_108_clicked();

    void on_ScBtn_109_clicked();

    void on_ScBtn_107_clicked();

    void on_ScBtn_110_clicked();

    void on_ScBtn_105_clicked();

    void on_ScBtn_117_clicked();

    void on_ScBtn_116_clicked();

    void on_ScBtn_114_clicked();

    void on_ScBtn_115_clicked();

    void on_ScBtn_112_clicked();

    void on_ScBtn_113_clicked();

    void on_ScBtn_111_clicked();

    void on_FrBtn_4_clicked();

    void on_FrBtn_5_clicked();

    void on_FrBtn_6_clicked();

    void on_FrBtn_7_clicked();

    void on_FrBtn_8_clicked();

    void on_FrBtn_9_clicked();

    void on_FrBtn_10_clicked();

    void on_FrBtn_11_clicked();

    void on_FrBtn_12_clicked();

    void on_FrBtn_13_clicked();

    void on_FrBtn_14_clicked();

    void on_FrBtn_15_clicked();

    void on_FrBtn_16_clicked();

    void on_FrBtn_17_clicked();

    void on_FrBtn_18_clicked();

    void on_FrBtn_19_clicked();

    void on_FrBtn_26_clicked();

    void on_FrBtn_30_clicked();

    void on_FrBtn_24_clicked();

    void on_FrBtn_28_clicked();

    void on_FrBtn_32_clicked();

    void on_FrBtn_21_clicked();

    void on_FrBtn_23_clicked();

    void on_FrBtn_27_clicked();

    void on_FrBtn_31_clicked();

    void on_FrBtn_20_clicked();

    void on_FrBtn_22_clicked();

    void on_FrBtn_25_clicked();

    void on_FrBtn_29_clicked();

    void on_FrBtn_33_clicked();

private:
    Ui::keyboard *ui;
    QLineEdit *output;
    QPoint last;

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
};

#endif // KEYBOARD_H
