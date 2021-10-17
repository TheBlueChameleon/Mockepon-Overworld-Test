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
    return;

    pugi::xml_document doc;

    QVERIFY_EXCEPTION_THROWN(
                doc = XMLload("no valid file"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = XMLload("../unittest-xml/invalid-project-explicit.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = XMLload("../unittest-xml/invalid-project-implicit.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = XMLload("../unittest-xml/invalid-project-missing-name.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = XMLload("../unittest-xml/invalid-version-major.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = XMLload("../unittest-xml/invalid-version-minor.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = XMLload("../unittest-xml/invalid-version-missing.xml"),
                std::runtime_error
            );
    QVERIFY_EXCEPTION_THROWN(
                doc = XMLload("../unittest-xml/invalid-version-text.xml"),
                std::runtime_error
            );

    doc = XMLload("../unittest-xml/animation-ref.xml", "animation");

    auto root = doc.child("project");
    auto nodeAnimation = root.child("animation");

    auto content = XMLextractAttributeList(nodeAnimation);
    for (auto & line : content) {
        std::cout << line.first << std::endl;
        for (auto & av_pair : line.second) {
            std::cout << "\t" << av_pair.first << ": " << av_pair.second << std::endl;
        }
    }
}
