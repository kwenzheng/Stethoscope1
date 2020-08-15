#include "stethoscope.h"
#include "ui_stethoscope.h"

Stethoscope::Stethoscope(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Stethoscope)
{
    ui->setupUi(this);

}

Stethoscope::~Stethoscope()
{
    delete ui;
}
