#ifndef TITLEWG_H
#define TITLEWG_H

#include <QWidget>

namespace Ui {
class Titlewg;
}

class Titlewg : public QWidget
{
    Q_OBJECT

public:
    explicit Titlewg(QWidget *parent = nullptr);
    ~Titlewg();

protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);

signals:
    void showSetWg();
    void closeWindow();

private:
    Ui::Titlewg *ui;
    QPoint m_pt;   //差值：鼠标当前位置 - 窗口左上角点

    QWidget* m_parent;
};

#endif // TITLEWG_H
