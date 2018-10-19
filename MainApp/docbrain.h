#ifndef DOCBRAIN_H
#define DOCBRAIN_H

#include <QObject>
#include "sequence.h"
#include <QSharedPointer>

class DocBrain : public QObject
{
  Q_OBJECT

  Q_PROPERTY(QSharedPointer<Sequence> sequence MEMBER m_sequence NOTIFY sequenceChanged)
  Q_PROPERTY(bool edited MEMBER m_edited NOTIFY editedChanged)

public:
//  explicit DocBrain(QObject *parent = nullptr);

//  Q_INVOKABLE void openFile(const QUrl &url);
//  Q_INVOKABLE void saveFile();
//  Q_INVOKABLE void saveAsFile(const QUrl &url);

protected:
  QSharedPointer<Sequence> m_sequence;
  bool m_edited;

signals:
  void sequenceChanged(QSharedPointer<Sequence> newSequence);
  void editedChanged(bool isEdited);
  void fileOpened(const QUrl &url);
  void fileSaved(const QUrl &url);

public slots:

};

#endif // DOCBRAIN_H
