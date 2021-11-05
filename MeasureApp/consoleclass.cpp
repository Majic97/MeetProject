#include "consoleclass.h"

ConsoleClass::ConsoleClass(QWidget *parent) : QWidget (parent)
{
    ui->setupUi(this);

}

ConsoleClass::~ConsoleClass()
{

    qDebug()<< "Console class destoyed";
}

void ConsoleClass::GetDataWithSignal(ProtocolToConsole Message)
{
    ui->textBrowser->append(Message.MainMessage);
}
