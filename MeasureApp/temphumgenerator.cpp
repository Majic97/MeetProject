#include "temphumgenerator.h"

TempHumGenerator::TempHumGenerator(QObject *parent) : QObject(parent)
{
    timer = new QTimer();


    connect(timer,&QTimer::timeout,this,[this](){
        float temp = GetTemperature();
        float hum = GetHumidity();
        emit ValueSignal(temp,hum);
    },Qt::QueuedConnection);


}

TempHumGenerator::~TempHumGenerator()
{
//    delete timer;
}

void TempHumGenerator::start()
{
    qDebug()<<"111";
    timer->start(500);
}

void TempHumGenerator::stop()
{
    timer->stop();
}

float TempHumGenerator::GetTemperature()
{
    int MAX_RAND =5;
    int MIN_RANDOM =0;

    return rand()& (MAX_RAND - MIN_RANDOM +1);
}

float TempHumGenerator::GetHumidity()
{
    int MAX_RAND =80;
    int MIN_RANDOM =20;

    return rand() % (MAX_RAND - MIN_RANDOM +1);
}
