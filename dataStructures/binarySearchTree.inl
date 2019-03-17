#include <vector>
#include <algorithm>

template<typename T>
T BinarySearchTree<T>::Node::getValue()
{
    return value;
}

template<typename T>
typename BinarySearchTree<T>::Node*  BinarySearchTree<T>::Node::leftChild()
{
    return left.get();
}

template<typename T>
typename BinarySearchTree<T>::Node*  BinarySearchTree<T>::Node::rightChild()
{
    return right.get();
}

template<typename T>
void BinarySearchTree<T>::Node::setLeft(T nodeVal)
{
    this->left = std::make_unique<Node>(nodeVal);
}

template<typename T>
void BinarySearchTree<T>::Node::setRight(T nodeVal)
{
    this->right = std::make_unique<Node>(nodeVal);
}

template<typename T>
void BinarySearchTree<T>::insert(T value)
{
    if (root == nullptr) {
        this->root = std::make_unique<Node>(value);
        size++;
    } else
    {
        auto nodeTracker = root.get();
        while(true){
            if (value < nodeTracker->getValue()) {
                if (nodeTracker->leftChild() == nullptr) {
                    nodeTracker->setLeft(value);
                    size++;
                    break;
                } else
                {
                    nodeTracker = nodeTracker->leftChild();
                }
            } else if (value > nodeTracker->getValue()) {
                if (nodeTracker->rightChild() == nullptr) {
                    nodeTracker->setRight(value);
                    size++;
                    break;
                } else
                {
                    nodeTracker = nodeTracker->rightChild();
                }
            } else
            {
                break;
            }
        }
        //rebalance(root);
    }
}

template<typename T>
bool BinarySearchTree<T>::search(T value)
{}

template<typename T>
int BinarySearchTree<T>::findSize()
{
    return size;
}

template<typename T>
bool BinarySearchTree<T>::remove(T value)
{}

template<typename T>
std::vector<T> BinarySearchTree<T>::preOrder()
{}

template<typename T>
std::vector<T> BinarySearchTree<T>::inOrder()
{}

template<typename T>
std::vector<T> BinarySearchTree<T>::postOrder()
{}

template<typename T>
int BinarySearchTree<T>::balance(Node &cell)
{
    if (cell == nullptr) {
        return 0;
    }
    int leftBal = balance(cell->leftChild());
    if (leftBal == -1) {
        return -1;
    }
    int rightBal = balance(cell->rightChild());
    if (rightBal == -1) {
        return -1;
    }
    int balanceFactor = leftBal - rightBal;
    if (balanceFactor < -1 || balanceFactor > 1) {
        return -1;
    }
    return 1 + std::max(leftBal, rightBal);
}

template<typename T>
void BinarySearchTree<T>::rebalance(){

}
