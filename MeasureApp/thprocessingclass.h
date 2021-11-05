#ifndef THPROCESSINGCLASS_H
#define THPROCESSINGCLASS_H

#include <QObject>
#include <QDateTime>
#include <QDebug>

struct THDrow {
    float Temperature;
    float Humidity;
    QDateTime Date;
};

struct ProtocolToConsole{
    QString  MainMessage;
};


class THProcessingClass : public QObject
{
    Q_OBJECT
public:
    explicit THProcessingClass(QObject *parent = nullptr);
    void AddData(float &Temperature, float &Humidity);
    ~THProcessingClass();

signals:
    void SendDataToConsole(ProtocolToConsole Message);

private:
    QVector<THDrow> DataContainer;
};

#endif // THPROCESSINGCLASS_H
