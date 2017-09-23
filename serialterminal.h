#ifndef SERIALTERMINAL_H
#define SERIALTERMINAL_H

#include <QtSerialPort/QSerialPort>

#include <QObject>



class SerialTerminal : public QObject
{
    Q_OBJECT
public:
    SerialTerminal();
    void openSerialPort(QString comName, int baud);
    void writeToSerialPort(QString message);
    bool getConnectionStatus();
    void closeSerialPort();

public slots:

    void openSerialPortSlot(QString comName, int baud);
    void writeToSerialPortSlot(QString message);
    void readFromSerialPort();
    bool getConnectionStatusSlot();
    void closeSerialPortSlot();



private:

    QSerialPort *serialPort;



signals:

    QString getData(QString data);



};

#endif // SERIALTERMINAL_H
