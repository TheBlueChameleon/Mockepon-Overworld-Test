// ========================================================================== //
// Depenencies

// STL

// Qt

// SDL

// local
#include "tst_main.hpp"
#include "../Mockepon-Overworld/SDL-globals.hpp"
#include "../Mockepon-Overworld/window.hpp"
#include "../Mockepon-Overworld/gfxstore.hpp"
#include "../Mockepon-Overworld/animation.hpp"

// ========================================================================== //
// Local Auxillary Funcs

// ========================================================================== //
// Test Cases

void Test::test_animation() {
    return;

    Window w ("Animation Test Window", 100, 100);
    GfxStore gfxStore(w);
    Animation ani(gfxStore);

    QVERIFY(ani.getSize() == 0);
    QVERIFY(ani.getCurrentFrameID() == 0);

    QVERIFY_EXCEPTION_THROWN(
                ani.addFrame(0),
                std::out_of_range
            );

    ani.addFrame("../unittest-gfx/frame01.png");
    ani.addFrame("../unittest-gfx/frame02.png");
    ani.addFrame("../unittest-gfx/frame03.png");
    ani.addFrame("../unittest-gfx/frame04.png");
    ani.addFrame("../unittest-gfx/frame05.png");
    ani.addFrame("../unittest-gfx/frame06.png");
    ani.addFrame("../unittest-gfx/frame07.png");
    ani.addFrame("../unittest-gfx/frame08.png");
    ani.addFrame("../unittest-gfx/frame09.png");
    ani.addFrame("../unittest-gfx/frame10.png");

    ani.addFrame("../unittest-gfx/frame10.png");
    QVERIFY(gfxStore.getSize() == 10);
    QVERIFY(ani  .getSize() == 11);


    QVERIFY_EXCEPTION_THROWN(
                ani.addFrame("../unittest-gfx/frame_small.png"),
                std::runtime_error
            );

    ani.show(25, 25);
}
