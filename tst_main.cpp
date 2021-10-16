// ========================================================================== //
// Depenencies

// local
#include "tst_main.hpp"

// ========================================================================== //
// Test CTor, DTor

Test::Test() {
    printBoxed("preparing test");
    std::cout << "Setting up SDL ... " << std::flush;

    if ( SDL_Init(SDL_INIT_EVERYTHING) ) {
        std::cerr << "error initializing SDL: " << SDL_GetError() << std::endl;
        std::exit(EXIT_FAILURE);
    } else {
        std::atexit(SDL_Quit);
    }

    if (TTF_Init() ) {
        std::cerr << "error initializing SDL: " << SDL_GetError() << std::endl;
        std::exit(EXIT_FAILURE);
    } else {
        std::atexit(TTF_Quit);
    }

    initGlobals();

    std::cout << "Done" << std::endl;
}
// .......................................................................... //
Test::~Test() {
    printBoxed("tidy up after test");

    std::cout << "Done" << std::endl;
}

// ========================================================================== //
// Auxillary procs

void Test::printBoxed(const std::string & text, const int width, const char liner, const char edge) {
    std::cout << edge;
    std::cout << std::string(width - 2, liner);
    std::cout << edge << std::endl;

    auto length = text.length();
    auto spaces = width - (length + 2);
    auto extra = spaces & 1;

    spaces >>= 1;

    std::cout << edge << std::string(spaces, ' ');
    std::cout << text;
    std::cout << std::string(spaces, ' ');
    if (extra) {std::cout << " ";}
    std::cout << edge << std::endl;

    std::cout << edge;
    std::cout << std::string(width - 2, liner);
    std::cout << edge << std::endl << std::endl;
}

// ========================================================================== //
// Globals Tests

void Test::test_SDL_globals() {
    printBoxed("Testing SDL globals");

    std::cout << "Font loaded ... " << std::flush;
    QVERIFY( font_fixedSize != nullptr );
    std::cout << "ok" << std::endl;
}

// ========================================================================== //

QTEST_APPLESS_MAIN(Test)
