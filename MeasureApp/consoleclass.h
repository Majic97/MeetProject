#ifndef CONSOLECLASS_H
#define CONSOLECLASS_H
#include "ui_ConsoleWindow.h"
#include "QDebug"
#include "iostream"
#include "thprocessingclass.h"

using namespace std;

namespace Ui {
class ConsoleWindow;
}

#include <QObject>
#include <QWidget>

class ConsoleClass : public QWidget
{
    Q_OBJECT
public:
    explicit ConsoleClass(QWidget *parent = nullptr);
    virtual ~ConsoleClass();
    Ui::ConsoleWindow *ui;
private:


signals:

public slots:
    void GetDataWithSignal(ProtocolToConsole Message);

};

#endif // CONSOLECLASS_H
