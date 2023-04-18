#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include "greeter.h"

class Window : public QWidget
{
    Q_OBJECT

public:
    Window();

private slots:
    void sayHi();

private:
    QPushButton *button;
    Greeter *greeter;
};

#endif // WINDOW_H
