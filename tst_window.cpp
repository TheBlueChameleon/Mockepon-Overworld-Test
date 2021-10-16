// ========================================================================== //
// Depenencies

// STL

// Qt

// SDL

// local
#include "tst_main.hpp"
#include "../Mockepon-Overworld/SDL-globals.hpp"
#include "../Mockepon-Overworld/window.hpp"

// ========================================================================== //
// Local Auxillary Funcs

void renderFunc ([[maybe_unused]] void * data) {
    Window * w = (Window *) data;
    w->print("Some Stuff on the window", 0, 0);

    w->print("More Stuff, somewhere else, stretched",
             0, 20,
             400, 30,
             color_cyan);

    w->print("text partially off screen", 650, 40);
}
// -------------------------------------------------------------------------- //

// ========================================================================== //
// Test Cases

void Test::test_window_mainloop() {
    return;

    Window w ("Window Title");

    w.setIdleFunc(renderFunc);
    w.setIdleData(&w);

    w.mainloop();
}
