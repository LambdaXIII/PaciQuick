#include "brains.h"

namespace preparing {


QObject* uiBrainSingletonProvider(QQmlEngine *engine, QJSEngine *scriptEngine)
{
  Q_UNUSED(engine)
  Q_UNUSED(scriptEngine)

  UIBrain *single = new UIBrain();
  return single;
}
void regesterBrains()
{
  qmlRegisterSingletonType<UIBrain>("Paci.Brain", 1, 0, "UIBrain", uiBrainSingletonProvider);
}

} //namespace preparing
