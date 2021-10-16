TEMPLATE = app

QT += core testlib
QT -= gui

CONFIG += c++17
CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

LIBS += -L/usr/local/lib
LIBS += -lSDL2
LIBS += -lSDL2_image
LIBS += -lSDL2_ttf

SOURCES += \
    ../Mockepon-Overworld/SDL-globals.cpp \
    ../Mockepon-Overworld/animation.cpp \
    ../Mockepon-Overworld/pugixml.cpp \
    ../Mockepon-Overworld/window.cpp \
    ../Mockepon-Overworld/gfxstore.cpp \
    ../Mockepon-Overworld/xmlconvenience.cpp \
    tst_animation.cpp \
    tst_gfxStore.cpp \
    tst_main.cpp \
    tst_window.cpp \
    tst_xmlconvenience.cpp

HEADERS += \
    ../Mockepon-Overworld/SDL-globals.hpp \
    ../Mockepon-Overworld/animation.hpp \
    ../Mockepon-Overworld/gfxstore.hpp \
    ../Mockepon-Overworld/pugiconfig.hpp \
    ../Mockepon-Overworld/pugixml.hpp \
    ../Mockepon-Overworld/window.hpp \
    ../Mockepon-Overworld/xmlconvenience.hpp \
    tst_main.hpp
