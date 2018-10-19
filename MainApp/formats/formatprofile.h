#ifndef FORMATPROFILE_H
#define FORMATPROFILE_H

#include <QObject>
#include <QMap>



class FormatProfile
  : public QObject
{
  Q_OBJECT
public:
  enum Format {
    Unknown,
    Paci,
    PlainText,
    Fcp7Xml,
    Fcp7XmlClipName,
    Csv,
    Srt,
    Ttml,
    FlameXml
  };
  Q_ENUM(Format)

  typedef QMap<FormatProfile::Format, QString> FMAP;

  Q_INVOKABLE static FMAP formatNames();
  Q_INVOKABLE static FMAP formatSuffixes();

};

#endif // FORMATPROFILE_H
