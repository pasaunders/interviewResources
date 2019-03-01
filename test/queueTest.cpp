#include <vector>
#include "../dataStructures/dataStructures.h"
#include "catch.hpp"

TEST_CASE("Test hombrew queue member functions") {
    Queue<int> myQueue;
    std::vector<int> testingNumbers{1,2,3,4,5,6,7,8,9};
    for(auto&& i : testingNumbers)
    {
        REQUIRE(myQueue.enqueue(i));
    }
    REQUIRE(testingNumbers.size() == myQueue.size());
    for(int i = testingNumbers.size()-1; i >=0; i--)
    {
        REQUIRE(testingNumbers.front() == myQueue.peek());
        REQUIRE(testingNumbers.front() == myQueue.dequeue());
        testingNumbers.erase(testingNumbers.begin());
    }
}