QT += quick
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
    uibrain.cpp \
    docbrain.cpp \
    brains.cpp \
    loaderagent.cpp \
    formats/formatprofile.cpp

RESOURCES += qml.qrc \
    ../PaciQmlWidgets/pwidgets.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH = $$PWD/../PaciQmlWidgets

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    uibrain.h \
    docbrain.h \
    brains.h \
    loaderagent.h \
    formats/formatprofile.h

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../CandyQt/release/ -lCandyQt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../CandyQt/debug/ -lCandyQt
else:unix: LIBS += -L$$OUT_PWD/../CandyQt/ -lCandyQt

INCLUDEPATH += $$PWD/../CandyQt
DEPENDPATH += $$PWD/../CandyQt

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../PaciCore/release/ -lPaciCore
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../PaciCore/debug/ -lPaciCore
else:unix: LIBS += -L$$OUT_PWD/../PaciCore/ -lPaciCore

INCLUDEPATH += $$PWD/../PaciCore
DEPENDPATH += $$PWD/../PaciCore

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../PaciFormat/release/ -lPaciFormat
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../PaciFormat/debug/ -lPaciFormat
else:unix: LIBS += -L$$OUT_PWD/../PaciFormat/ -lPaciFormat

INCLUDEPATH += $$PWD/../PaciFormat
DEPENDPATH += $$PWD/../PaciFormat
