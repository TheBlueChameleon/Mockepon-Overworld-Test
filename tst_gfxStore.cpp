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

// ========================================================================== //
// Local Auxillary Funcs

// ========================================================================== //
// Test Cases

void Test::test_gfxStore() {
    return;

    printBoxed("About to test GfxStore");

    Window w ("GfxStore Test Window", 60, 60);
    GfxStore store(w);

    QVERIFY_EXCEPTION_THROWN(
                store.show(0),
                std::out_of_range
    );

    QVERIFY( store.load("../unittest-gfx/frame01.png") == 0 );
    QVERIFY( store.load("../unittest-gfx/frame04.png") == 1 );
    QVERIFY( store.load("../unittest-gfx/frame04.png") == 1 );

    QVERIFY( store.getSize() == 2 );
    QVERIFY( store.getFilename(0) == "../unittest-gfx/frame01.png" );
    QVERIFY( store.getImageDimensions(0) == std::make_pair(50, 50) );

    store.show(0);
    store.show(1);

    std::cout << "ok." << std::endl;
}
