#include "greeter.h"
#include <QPainter>
#include <QPaintEvent>

Greeter::Greeter() : QWidget(), font("Times", 20, QFont::Bold) {
    setFixedSize(240, 60);
}

void Greeter::setGreeting(const QString &text)
{
    greeting = text;
    update();
}

void Greeter::paintEvent(QPaintEvent * /* event */)
{
    QPainter painter(this);
    painter.setBrush(palette().light().color());
    painter.drawRect(rect());
    painter.setPen(QPen(Qt::red));
    painter.setFont(font);
    painter.drawText(rect(), Qt::AlignCenter, greeting);
}