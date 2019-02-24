#include <vector>
#include <iostream>
#include "catch.hpp"
#include "../mergeSort.cpp"

 TEST_CASE("Test sorting unsorted array") {
    std::vector<int> testingVector = {1,3,7,2,19,6,10,5};
    std::vector<int> sortedVector = {1,2,3,5,6,7,10,19};
    mergeSort(testingVector, 0, 7);
    REQUIRE(testingVector == sortedVector);
 }
