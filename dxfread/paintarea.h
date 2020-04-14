#ifndef PAINTAREA_H
#define PAINTAREA_H

#include <QWidget>
#include <QPainter>

class PaintArea : public QWidget
{
    Q_OBJECT
public:
    explicit PaintArea(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *);

signals:

public slots:
};

#endif // PAINTAREA_H
