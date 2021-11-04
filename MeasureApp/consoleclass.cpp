#include "consoleclass.h"

ConsoleClass::ConsoleClass(QWidget *parent) : QWidget (parent)
{
    ui->setupUi(this);

}

ConsoleClass::~ConsoleClass()
{

    qDebug()<< "Console class destoyed";
}
