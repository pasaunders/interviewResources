#pragma once
#include <vector>
#include <memory>

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
        std::unique_ptr<Node> left = nullptr;
        std::unique_ptr<Node> right = nullptr;
        T value;
    public:
        inline Node(T value) : value(value) {};
        T getValue();
        Node* leftChild();
        void setLeft(T nodeVal);
        Node* rightChild();
        void setRight(T nodeVal);
    };

    int size = 0;
    int balance(Node &cell);              //-1 for left balance, +1 for right balance, 0 for balanced.
    void rebalance();           //rebalance a node and its children.
    std::unique_ptr<Node> root = nullptr;
public:
    void insert(T value);       //adds a value to the tree.
    bool search(T value);       //whether a given value is in the tree
    int findSize();                 //number of nodes in tree
    bool remove(T value);       //removes a value from the tree. Returns true if successful, false if the value did not exist. Then balances the tree.
    std::vector<T> preOrder();  //returns a vector of values from an pre_order traversal of the tree.
    std::vector<T> inOrder();   //returns a vector of values from an in_order traversal of the tree.
    std::vector<T> postOrder(); //returns a vector of values from an post_order traversal of the tree.
};

#include "stack.inl"
#include "queue.inl"
#include "binarySearchTree.inl"