#include "executeclass.h"

ExecuteClass::ExecuteClass(QObject *parent) : QObject(parent)
{
    TempHumGenerator TempHum;
    TempHum.start();
    console.show();

    connect(&TempHum,&TempHumGenerator::ValueSignal,[this](float temperature, float humidity){
        ProcessObj.AddData(temperature,humidity);
    });


}

ExecuteClass::~ExecuteClass()
{

}

void ExecuteClass::timetText()
{
}
