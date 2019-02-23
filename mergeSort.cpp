//Merge sort implemented in c++
#include <iostream>
#include <vector>

void merge (int inputArray[], int low, int mid, int high)
{
    std::vector<int> holdingCollection;
    int left = low;
    int right = mid + 1;
    int holdingCollectionIdx = 0;
    while(left <= mid && right <= high){
        holdingCollection[holdingCollectionIdx++] = (inputArray[left] <= inputArray[right]) ? inputArray[left++] : inputArray[right++];
    }
    while(left <= mid) { holdingCollection[holdingCollectionIdx++] = inputArray[left++]; }
    while(right <= high) { holdingCollection[holdingCollectionIdx++] = inputArray[right++]; }
    for(int i = 0; i < holdingCollection.size(); i++)
    {
        /* code */
    }
    
}

void mergeSort (int inputArray[], int low, int high) {
    if (low < high) { // 
        int mid = (low + high) / 2;
        mergeSort(inputArray, low, mid);
        mergeSort(inputArray, mid+1, high);
        merge (inputArray, low, mid, high);
    }
    
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
