#pragma once
#include <vector>

template<typename T>
class Stack
{
private:
    std::vector<T> stackStore;
public:
    bool push(T input);
    T pop();
};

template<typename T>
class Queue
{
private:
    std::vector<T> queueStore;
    int length = 0;
public:
    bool enqueue(T input);
    T dequeue();
    T peek();
    int size();
};

template<typename T>
class BinarySearchTree
{
private:
    class Node
    {
    private:
        Node* left;
        Node* right;
        T value;
    public:
        T getValue();
        Node* leftChild();
        Node* rightChild();
    };
    int size = 0;
    int balance(); //-1 for left balance, +1 for right balance, 0 for balanced.
public:
    void insert(T value); //adds a value to the tree.
    bool search(T value); //whether a given value is in the tree
    int size(); //number of nodes in tree
    bool remove(T value); //removes a value from the tree. Returns true if successful, false if the value did not exist. Then balances the tree.
    std::vector<T> pre_order(); //returns a vector of values from an pre_order traversal of the tree.
    std::vector<T> in_order(); //returns a vector of values from an in_order traversal of the tree.
    std::vector<T> post_order(); //returns a vector of values from an post_order traversal of the tree.
}

#include "stack.inl"
#include "queue.inl"
#include "binarySearchTree.inl"