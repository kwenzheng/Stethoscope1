#include "stethoscope.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Stethoscope w;
    w.show();

    return a.exec();
}
