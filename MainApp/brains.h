#ifndef BRAINS_H
#define BRAINS_H
#include <QQmlApplicationEngine>
#include "uibrain.h"

namespace preparing {

QObject* uiBrainSingletonProvider(QQmlEngine *engine, QJSEngine *scriptEngine);

void regesterBrains();

} //namespace preparing

#endif // BRAINS_H
