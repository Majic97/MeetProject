#include <QCoreApplication>
#include <executeclass.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ExecuteClass exec(nullptr);

    return a.exec();
}
