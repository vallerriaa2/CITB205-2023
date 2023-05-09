#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.setFixedSize(480, 320);
    window.show();
    return app.exec();
}