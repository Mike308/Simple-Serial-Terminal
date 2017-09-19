#include "serialterminal.h"
#include <QtSerialPort/QSerialPort>

SerialTerminal::SerialTerminal()
{
    serialPort = new QSerialPort(this);
}

void SerialTerminal::openSerialPort(QString comName, int baud){

    serialPort->setPortName(comName);
    serialPort->setBaudRate(baud);
    serialPort->setBaudRate(baud);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setStopBits(QSerialPort::OneStop);
    serialPort->open(QIODevice::ReadWrite);



}

void SerialTerminal::writeToSerialPort(QString message){

    const QByteArray &messageArray = message.toLocal8Bit();
    serialPort->write(messageArray);
}

void SerialTerminal::openSerialPortSlot(QString comName, int baud){

    this->openSerialPort(comName,baud);
}

void SerialTerminal::writeToSerialPortSlot(QString message){

    this->writeToSerialPort(message);
}


