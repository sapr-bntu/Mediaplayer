 SOURCES = testqstring.cpp \
   D:/ferz/tmp/qt/TEST/111/sapr-bntu-Mediaplayer-7e902b2/mainwindow.cpp
 CONFIG  += qtestlib

QT       += core gui sql phonon

 # install
 target.path = $$[QT_INSTALL_EXAMPLES]/qtestlib/tutorial1
 sources.files = $$SOURCES *.pro
 sources.path = $$[QT_INSTALL_EXAMPLES]/qtestlib/tutorial1
 INSTALLS += target sources

 symbian {
     TARGET.UID3 = 0xA000C60B
     include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
 }
 maemo5: include($$QT_SOURCE_TREE/examples/maemo5pkgrules.pri)

 symbian: warning(This example might not fully work on Symbian platform)
 maemo5: warning(This example might not fully work on Maemo platform)
 simulator: warning(This example might not fully work on Simulator platform)

HEADERS += \
   D:/ferz/tmp/qt/TEST/111/sapr-bntu-Mediaplayer-7e902b2/mainwindow.h
