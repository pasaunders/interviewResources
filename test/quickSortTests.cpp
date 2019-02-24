#include <vector>
#include "catch.hpp"
#include "../quickSort.cpp"

TEST_CASE("Quicksort an unsorted array") {
    std::vector<int> testingContainer = {1,3,7,2,19,6,10,5};
    std::vector<int> sortedContainer = {1,2,3,5,6,7,10,19};
    quickSort(testingContainer, 0, 7);
    for(auto i = 0; i < testingContainer.size() ; i++)
    {
        REQUIRE(testingContainer[i] == sortedContainer[i]);
    }
}