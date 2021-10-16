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
    pugi::xml_document doc;

    QVERIFY_EXCEPTION_THROWN(
                doc = loadXML("no valid file"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = loadXML("../unittest-xml/invalid-project-explicit.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = loadXML("../unittest-xml/invalid-project-implicit.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = loadXML("../unittest-xml/invalid-project-missing-name.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = loadXML("../unittest-xml/invalid-version-major.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = loadXML("../unittest-xml/invalid-version-minor.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = loadXML("../unittest-xml/invalid-version-missing.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = loadXML("../unittest-xml/invalid-version-text.xml"),
                std::runtime_error
            );

    doc = loadXML("../unittest-xml/valid-deprecated.xml", "animation");
}
