#ifndef PAINTER_H
#define PAINTER_H

#include <QWidget>
#include <QImage>

class Painter : public QWidget
{
    Q_OBJECT
public:
    explicit Painter(int width, int height, QWidget *parent = nullptr);

    QSize sizeHint() const;

    void setCanvasSize(const QSize &size);
    QSize getCanvasSize() const { return canvas.size(); }

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);

private:
    QImage canvas;
};

#endif // PAINTER_H
