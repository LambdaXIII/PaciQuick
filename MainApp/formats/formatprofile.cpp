#include "formatprofile.h"
#include <QGuiApplication>

#define TR(x) QGuiApplication::translate("Formats",x)

typedef QMap<FormatProfile::Format, QString> FMAP;

FMAP FormatProfile::formatNames()
{
  FMAP res {
    {Paci, TR("啪词")},
    {PlainText, TR("文本台词本")},
    {Fcp7Xml, TR("FCP7 XML 文件")},
    {Fcp7XmlClipName, TR("XML 片段名模式")},
    {Csv, TR("逗号分割值")},
    {Srt, TR("SRT字幕文件")},
    {Ttml, TR("TTML字幕文件")},
    {FlameXml, TR("Flame字幕文件")}
  };
  return res;
}

FMAP FormatProfile::formatSuffixes()
{
  FMAP res {
    {Paci, "*.paci"},
    {PlainText, "*.txt"},
    {Fcp7Xml, "*.xml"},
    {Csv, "*.csv"},
    {Srt, "*.srt"},
    {Fcp7XmlClipName, "*.xml"},
    {Ttml, "*.xml"},
    {FlameXml, "*.xml"}
  };
  return res;
}


#undef TR
