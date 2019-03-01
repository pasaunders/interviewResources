#include <vector>
#include <stdexcept>

template<typename T>
bool Queue<T>::enqueue(T input)
{
    queueStore.push_back(input);
    length++;
    return true;
}

template<typename T>
T Queue<T>::dequeue()
{
    if(!queueStore.empty())
    {
        T tempStore = queueStore.front();
        queueStore.erase(queueStore.begin());
        length--;
        return tempStore;
    } else
    {
        throw std::out_of_range("Queue is empty.");
    }
}

template<typename T>
T Queue<T>::peek()
{
    if(!queueStore.empty())
    {
        return queueStore.front();
    } else
    {
        throw std::out_of_range("Queue is empty.");
    }
}

template<typename T>
int Queue<T>::size()
{
    return length;
}