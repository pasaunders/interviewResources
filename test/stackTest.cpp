#include <vector>
#include "../dataStructures/dataStructures.h"
#include "catch.hpp"

TEST_CASE("Test hombrew stack member functions") {
    Stack<int> myStack;
    std::vector<int> testingNumbers{1,2,3,4,5,6,7,8,9};
    for(auto&& i : testingNumbers)
    {
        REQUIRE(myStack.push(i));
    }
    for(int i = testingNumbers.size()-1; i >=0; i--)
    {
        REQUIRE(testingNumbers.back() == myStack.pop());
        testingNumbers.pop_back();
    }
}