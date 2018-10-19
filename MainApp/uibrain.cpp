#include "uibrain.h"

//UIBrain::UIBrain(QObject *parent) : QObject(parent)
//{

//}

QString UIBrain::statusMessage()
{
  return m_statusMessage;
}

void UIBrain::setStatusMessage(QString &msg)
{
  if (m_statusMessage != msg) {
    m_statusMessage = msg;
    emit statusMessageChanged(m_statusMessage);
  }
}


void UIBrain::testFunction()
{

}
