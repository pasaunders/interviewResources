#include <vector>
void insertionSort(std::vector<int> &a)
{
    for(int i = 1; i < a.size(); i++)
    {
        int currentlySorting = a[i];
        int j = i-1;
        for(; j >=0 && a[j] > currentlySorting; j--)
        {
            a[j+1]=a[j]; //copy a[j] to a[j+1] so there will be a place to put currentlySorting when we find it's spot.
        }
        a[j+1] = currentlySorting;
    }
}