#ifndef TST_MAIN_HPP
#define TST_MAIN_HPP

// ========================================================================== //
// Depenencies

// STL
#include <iostream>
#include <string>

// Qt
#include <QtTest>

// SDL

// local
#include "../Mockepon-Overworld/SDL-globals.hpp"
#include "../Mockepon-Overworld/window.hpp"

// ========================================================================== //
// Test definitions

class Test : public QObject {
    Q_OBJECT

//private:

public:
    Test();
    ~Test();

    // ---------------------------------------------------------------------- //
    // auxiallary procs

    void printBoxed(const std::string & text, const int width = 80, const char liner = '=', const char edge = '#');

private slots:
    void test_xmlconvenience();
    void test_SDL_globals();
    void test_window_mainloop();
    void test_gfxStore();
    void test_animation();
    void test_animationStore();
};

#endif // TST_MAIN_HPP
