//Required infrastructure for Catch2 tests. All test cases in other files.
#define CATCH_CONFIG_MAIN
#include <catch.hpp>


//from Catch2 tutorial:
// Compile & run:
// - g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -c 020-TestCase-1.cpp (or other test file name)
// - g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -o 020-TestCase TestCase-1.o 020-TestCase-2.cpp && 020-TestCase --success
//
// - cl -EHsc -I%CATCH_SINGLE_INCLUDE% -c 020-TestCase-1.cpp
// - cl -EHsc -I%CATCH_SINGLE_INCLUDE% -Fe020-TestCase.exe 020-TestCase-1.obj 020-TestCase-2.cpp && 020-TestCase --success
