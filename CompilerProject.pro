QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    mainwindow.cpp \
    main.cpp \
    TM.c \
    CompilerProject/y.tab.c \
    CompilerProject/lex.yy.c \
    CompilerProject/gen_dot.c \
    CompilerProject/analyze.cpp \
    CompilerProject/cgen.cpp \
    CompilerProject/code.cpp \
    CompilerProject/tables.cpp

HEADERS += \
    dialog.h \
    mainwindow.h \
    CompilerProject/y.tab.h \
    CompilerProject/token.h \
    CompilerProject/lexee.h \
    CompilerProject/gen_dot.h \
    CompilerProject/analyze.h \
    CompilerProject/cgen.h \
    CompilerProject/code.h \
    CompilerProject/tables.h \
    tm.h


FORMS += \
    dialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    CompilerProject.pro.user \
    CompilerProject/README.md \
    CompilerProject/y.output

RESOURCES += \
    myrsc.qrc
