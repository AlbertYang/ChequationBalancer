#ifndef HELP_DLG_H
#define HELP_DLG_H

#include <QDialog>
#include <QMouseEvent>

namespace Ui {
class help_dlg;
}

class help_dlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit help_dlg(QWidget *parent = 0);
    ~help_dlg();
    
private:
    Ui::help_dlg *ui;
    QPoint last;

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
};

#endif // HELP_DLG_H
