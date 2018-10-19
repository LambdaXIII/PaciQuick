#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "uibrain.h"
#include "brains.h"



int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);
  app.setApplicationDisplayName(app.tr("啪词"));
  app.setApplicationName("Paci");
  app.setApplicationVersion("0.1");


  preparing::regesterBrains();


  QQmlApplicationEngine engine;
  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
  if (engine.rootObjects().isEmpty())
    return -1;

  return app.exec();
}
