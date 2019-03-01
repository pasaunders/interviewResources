#include <vector>
#include <stdexcept>

template<typename T>
bool Stack<T>::push(T input)
{
    stackStore.push_back(input);
    return true;
}

template<typename T>
T Stack<T>::pop()
{
    if (!stackStore.empty()) {
        T tempStore = stackStore.back();
        stackStore.pop_back();
        return tempStore;
    } else
    {
        throw std::out_of_range("Stack is empty.");
    }
    
}