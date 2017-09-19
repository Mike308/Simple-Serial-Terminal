#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "serialterminal.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);


    QQmlApplicationEngine engine;
    QQmlContext *context = engine.rootContext();
    SerialTerminal serialTerminal;
    context->setContextProperty("serialTerminal",&serialTerminal);
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
