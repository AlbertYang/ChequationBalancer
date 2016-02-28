#include "warnningbox.h"
#include "ui_warnningbox.h"

warnningBox::warnningBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::warnningBox)
{
    ui->setupUi(this);
}

warnningBox::~warnningBox()
{
    delete ui;
}

void warnningBox::showWarnning(QString str){
    ui->warningLabel->setText(str);
    this->setFixedSize(559,202);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    this->show();
}

void warnningBox::mousePressEvent(QMouseEvent *e)
{
    last = e->globalPos();
}

void warnningBox::mouseMoveEvent(QMouseEvent *e)
{
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();

    last = e->globalPos();
    move(x()+dx, y()+dy);
}

void warnningBox::mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();

    move(x()+dx, y()+dy);
}
