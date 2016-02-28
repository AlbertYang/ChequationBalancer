#ifndef WARNNINGBOX_H
#define WARNNINGBOX_H

#include <QDialog>
#include <QMouseEvent>
#include<QString>

namespace Ui {
class warnningBox;
}

class warnningBox : public QDialog
{
    Q_OBJECT
    
public:
    explicit warnningBox(QWidget *parent = 0);
    void showWarnning(QString str);
    ~warnningBox();
    
private:
    Ui::warnningBox *ui;
    QPoint last;

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
};

#endif // WARNNINGBOX_H
