#ifndef TEMPHUMGENERATOR_H
#define TEMPHUMGENERATOR_H

#include <QObject>
#include <QTimer>
#include <QDebug>
#include <memory>

class TempHumGenerator : public QObject
{
    Q_OBJECT
public:
    explicit TempHumGenerator(QObject *parent = nullptr);
    virtual ~ TempHumGenerator();
    void start();
    void stop();
private:
    QTimer* timer;
    float GetTemperature();
    float GetHumidity();


signals:
    void ValueSignal(float temperature, float humidity);


};

#endif // TEMPHUMGENERATOR_H
