#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include<QLineEdit>
#include"keyboard.h"
#include"warnningbox.h"
#include"help_dlg.h"

#include <QString>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
QString s2q(const string &s);
string q2s(const QString &s);

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:

    void on_concernBtn_clicked();

    void on_solveBtn_clicked();

    void on_helpBtn_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::MainWindow *ui;
    keyboard myKeyBD;
    warnningBox warnning;
    help_dlg helpDlg;
    QPoint last;

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
};

