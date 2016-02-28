#include "help_dlg.h"
#include "ui_help_dlg.h"

help_dlg::help_dlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::help_dlg)
{
    ui->setupUi(this);
}

help_dlg::~help_dlg()
{
    delete ui;
}

//´°¿ÚÍÏ¶¯
void help_dlg::mousePressEvent(QMouseEvent *e)
{
    last = e->globalPos();
}

void help_dlg::mouseMoveEvent(QMouseEvent *e)
{
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();

    last = e->globalPos();
    move(x()+dx, y()+dy);
}

void help_dlg::mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();

    move(x()+dx, y()+dy);
}
