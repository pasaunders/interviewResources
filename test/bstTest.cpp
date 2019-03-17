#include <vector>
#include "../dataStructures/dataStructures.h"
#include "catch.hpp"

TEST_CASE("Test bst insert without need for balancing") {
    BinarySearchTree<int> myTree;
    myTree.insert(7);
    myTree.insert(5);
    myTree.insert(9);
    myTree.insert(3);
    myTree.insert(6);
    myTree.insert(1);
    myTree.insert(4);
    myTree.insert(8);
    myTree.insert(11);
    REQUIRE(myTree.findSize() == 9);
}