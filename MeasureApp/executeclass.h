#ifndef EXECUTECLASS_H
#define EXECUTECLASS_H

#include <QObject>
#include <consoleclass.h>
#include <memory>
#include <QDebug>
#include <iostream>
#include <QDialog>
#include <QBoxLayout>
#include <temphumgenerator.h>
#include <thprocessingclass.h>

using namespace std;


class ExecuteClass : public QObject
{
    Q_OBJECT
public:
    explicit ExecuteClass(QObject *parent = nullptr);
    ~ExecuteClass();

private:
    ConsoleClass console;
    THProcessingClass * ProcessObj = new THProcessingClass();

private slots:

signals:



};

#endif // EXECUTECLASS_H
