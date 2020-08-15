#ifndef STETHOSCOPE_H
#define STETHOSCOPE_H

#include <QWidget>
#include <QSerialPort>
namespace Ui {
class Stethoscope;
}

class Stethoscope : public QWidget
{
    Q_OBJECT

public:
    explicit Stethoscope(QWidget *parent = nullptr);
    ~Stethoscope();

private:
    Ui::Stethoscope *ui;
};

#endif // STETHOSCOPE_H
