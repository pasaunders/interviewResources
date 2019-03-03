#include <vector>

template<typename T>
T BinarySearchTree<T>::Node::getValue()
{
    return this->value;
}


template<typename T>
void BinarySearchTree<T>::insert(T value)
{
    if (this->root == nullptr) {
        this->root = &Node(value);
        this->size++;
    } else
    {
        BinarySearchTree::Node* nodeTracker = root;
        while(true){
            if (value < nodeTracker->getValue()) {
                if (nodeTracker->left == nullptr) {
                    nodeTracker->left = &Node(value);
                    this->size++;
                    break;
                } else
                {
                    nodeTracker = nodeTracker->left;
                }
            } else if (value > nodeTracker->getValue()) {
                if (nodeTracker->right == nullptr) {
                    nodeTracker->right = &Node(value);
                    this->size++;
                    break;
                } else
                {
                    nodeTracker = nodeTracker->right;
                }
            } else
            {
                break;
            }
        }
        rebalance(root);
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
int BinarySearchTree<T>::balance(){}

template<typename T>
void BinarySearchTree<T>::rebalance(BinarySearchTree::Node val){}

