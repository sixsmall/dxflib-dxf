#include "paintarea.h"

PaintArea::PaintArea(QWidget *parent) : QWidget(parent)
{
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
}

void PaintArea::paintEvent(QPaintEvent *value)
{
    QPainter p(this);
    p.drawLine(10, 15,20,30);
}
