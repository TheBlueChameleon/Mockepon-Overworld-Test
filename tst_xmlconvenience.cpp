// ========================================================================== //
// Depenencies

// STL

// Qt

// SDL

// local
#include "tst_main.hpp"
#include "../Mockepon-Overworld/xmlconvenience.hpp"

// ========================================================================== //
// Test Cases

void Test::test_xmlconvenience() {
    printBoxed("About to test XML convenience module");

    pugi::xml_document doc;
    QVERIFY_EXCEPTION_THROWN(
                doc = loadXML("no file"),
                std::runtime_error
            );

    std::cout << "ok" << std::endl;
}
