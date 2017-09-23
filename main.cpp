#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QSerialPortInfo>
#include "serialterminal.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QSerialPortInfo serialPortInfo;
    QList<QSerialPortInfo> ports = serialPortInfo.availablePorts();
    QList<qint32> bauds = serialPortInfo.standardBaudRates();
    QStringList portsName;
    QStringList baudsStr;


    foreach (QSerialPortInfo port, ports) {

        portsName.append(port.portName());

    }

    foreach (qint32 baud, bauds) {

        baudsStr.append(QString::number(baud));

    }



    QQmlApplicationEngine engine;
    QQmlContext *context = engine.rootContext();
    SerialTerminal serialTerminal;
    context->setContextProperty("serialTerminal",&serialTerminal);
    context->setContextProperty("portsNameModel",QVariant::fromValue(portsName));
    context->setContextProperty("baudsModel",QVariant::fromValue(baudsStr));

    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
