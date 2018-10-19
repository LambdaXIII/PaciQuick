#ifndef UIBRAIN_H
#define UIBRAIN_H

#include <QObject>

class UIBrain : public QObject
{
  Q_OBJECT
  Q_PROPERTY(QString statusMessage READ statusMessage WRITE setStatusMessage NOTIFY statusMessageChanged)

public:
//  explicit UIBrain(QObject *parent = nullptr);

  QString statusMessage();

  void setStatusMessage(QString &msg);

  Q_INVOKABLE void testFunction();
private:
  QString m_statusMessage;

signals:

  void statusMessageChanged(QString &msg);

public slots:
};

#endif // UIBRAIN_H
