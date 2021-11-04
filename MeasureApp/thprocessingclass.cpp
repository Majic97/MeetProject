#include "thprocessingclass.h"

THProcessingClass::THProcessingClass(QObject *parent) : QObject(parent)
{

}

void THProcessingClass::AddData(float &Temperature, float &Humidity)
{
    THDrow row;
    row.Temperature = Temperature;
    row.Humidity = Humidity;
    row.Date = QDateTime::currentDateTime();

    DataContainer.append(row);

    QString Message = "Received value: " + QString::number(Temperature) + " C°, "
            + QString::number(Humidity) + " φ, " + row.Date.toString();

    qDebug()<< Message;
}

THProcessingClass::~THProcessingClass()
{

}
