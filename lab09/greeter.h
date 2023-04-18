#ifndef GREETER_H
#define GREETER_H

#include <QWidget>

class Greeter : public QWidget {
    Q_OBJECT
public:
    Greeter();

public slots:
    void setGreeting(const QString &atext);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QString greeting;
    QFont font;
};

#endif