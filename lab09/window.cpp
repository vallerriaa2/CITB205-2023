#include "window.h"

#include <QtWidgets>

Window::Window()
{
    QIcon icon(":/images/hello.png");
    setWindowIcon(icon);
    button = new QPushButton(tr("Say Hi"));
    connect(button, &QPushButton::clicked, this, &Window::sayHi);
    greeter = new Greeter();
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(button);
    mainLayout->addWidget(greeter);
    setLayout(mainLayout);
    setWindowTitle(tr("Hello World"));
}

void Window::sayHi() {
    greeter->setGreeting(tr("Hello!"));
}