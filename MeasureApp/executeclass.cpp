#include "executeclass.h"

ExecuteClass::ExecuteClass(QObject *parent) : QObject(parent)
{
    TempHumGenerator *TempHum = new TempHumGenerator();

    TempHum->start();
    console.show();

    connect(TempHum,&TempHumGenerator::ValueSignal,[this](float temperature, float humidity){
        ProcessObj->AddData(temperature,humidity);
    });

    connect(ProcessObj,&THProcessingClass::SendDataToConsole,
            &console,&ConsoleClass::GetDataWithSignal);

}

ExecuteClass::~ExecuteClass()
{

}

