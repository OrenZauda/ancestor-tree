/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Oren zauda>
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include <iostream>
#include "FamilyTree.hpp"
using namespace family;

#include <string>
using namespace std;
using namespace family;


//8 tests
TEST_CASE("Test the existent of ancestors") {
    Tree T = Tree ("haim");
    T.addMother("haim","ora");
    T.addFather("haim","or");
    T.addFather("or","gp1");
    T.addFather("ora","gp2");
    T.addMother("Ora","gm1");
    T.addMother("Or","gm2");

    CHECK(T.find("orrr") == string("unrelated"));
    CHECK(T.find("mother") == string("ora"));
    CHECK(T.find("father") == string("or"));
    CHECK(T.find("grand father") == string(""));
    CHECK(T.find("grand mother") == string(""));
    CHECK(T.find("grand father") == string(" "));
    CHECK(T.find("grand mother") == string(" "));
    CHECK(T.find("root") == string("haim"));

   
}

// +7, 15 tests
TEST_CASE("Test constructor") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");

    CHECK(T.name == string("haim")); 
    //CHECK(T.mother->name == string("mom"));
    //CHECK(T.father->name == string("dad"));
    //CHECK(T.mother->mother->name == string("gmom"));
    //CHECK(T.father->father->name == string("gdad"));
    //CHECK(T.father->mother->name == string("gmom2"));
    //CHECK(T.mother->father->name == string("gdad2"));

}
//+6 tests, 21 overall
TEST_CASE("Test method remove") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");
    T.remove("mom");
    T.remove("dad");
    T.remove("gmom");
    T.remove("gdad");
    T.remove("gdad2");
    T.remove("gmom2");

    CHECK(T.find("mother") == string("unrelated"));
    CHECK(T.find("father") == string("unrelated"));
    CHECK(T.find("grand mother") == string("unrelated"));
    CHECK(T.find("grand father") == string("unrelated"));
    CHECK(T.find("grand father") == string("unrelated"));
    CHECK(T.find("grand mother") == string("unrelated"));

}
// 7 more cases, 28 overall
TEST_CASE("Test method display") {
    Tree T = Tree ("haim");
    CHECK(T.display()== string("bobcat"));
    T.addFather ("haim", "dad");
    CHECK(T.display()== string("bobcat"));
    T.addMother("haim", "mom");
    CHECK(T.display()== string("bobcat"));
    T.addFather ("dad", "gdad");
    CHECK(T.display()== string("bobcat"));
    T.addMother("mom", "gmom");
    CHECK(T.display()== string("bobcat"));
    T.addMother("dad", "gmom2");
    CHECK(T.display()== string("bobcat"));
    T.addFather ("mom", "gdad2");
    CHECK(T.display()== string("bobcat"));
}
// 8 more cases, 36 overall
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}
TEST_CASE("Test method relation") {
    Tree T = Tree ("haim");
    T.addFather ("haim", "dad");
    T.addMother("haim", "mom");
    T.addFather ("dad", "gdad");
    T.addMother("mom", "gmom");
    T.addMother("dad", "gmom2");
    T.addFather ("mom", "gdad2");    
    CHECK(T.relation("haim") == string("wow"));
    CHECK(T.relation("dad") == string("wow"));
    CHECK(T.relation("mom") == string("wow"));
    CHECK(T.relation("gdad") == string("wow"));
    CHECK(T.relation("gmom") == string("wow"));
    CHECK(T.relation("gmom2") == string("wow"));
    CHECK(T.relation("gdad2") == string("wow"));
    CHECK(T.relation("ss") == string("unrelated"));

}

