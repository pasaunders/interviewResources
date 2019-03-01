#include <vector>
#include "catch.hpp"
#include "../insertionSort.cpp"

TEST_CASE("Insertion sort an unsorted vector"){
    std::vector<int> testingContainer = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
    std::vector<int> sortedContainer = {2,3,4,5,15,19,26,27,36,38,44,46,47,48,50};
    insertionSort(testingContainer);
    REQUIRE(testingContainer.size() == sortedContainer.size());
    for(int i = 0; i < testingContainer.size(); i++)
    {
        REQUIRE(testingContainer[i] == sortedContainer[i]);
    }
}