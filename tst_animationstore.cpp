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
#include "../Mockepon-Overworld/animationstore.hpp"

// ========================================================================== //
// Test Cases

void Test::test_animationStore() {
    Window win ("GfxStore Test Window", 60, 60);
    GfxStore gfxStore(win);
    AnimationStore aniStore(gfxStore);

    aniStore.addAnimation("../unittest-xml/animation-ref.xml");
    aniStore.getAnimation(0).show(5,5);
}
