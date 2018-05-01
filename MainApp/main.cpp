#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "uibrain.h"

QObject* uiBrainSingletonProvider(QQmlEngine *engine, QJSEngine *scriptEngine)
{
  Q_UNUSED(engine)
  Q_UNUSED(scriptEngine)

  UIBrain *single = new UIBrain();
  return single;
}


int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);
  app.setApplicationDisplayName(app.tr("啪词"));
  app.setApplicationName("Paci");
  app.setApplicationVersion("0.1");


  qmlRegisterSingletonType<UIBrain>("Paci.UI", 1, 0, "UIBrain", uiBrainSingletonProvider);



  QQmlApplicationEngine engine;
  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
  if (engine.rootObjects().isEmpty())
    return -1;

  return app.exec();
}
