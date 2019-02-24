//Merge sort implemented in c++
#include <vector>

void merge (std::vector<int> &inputCollection, int low, int mid, int high)
{
    std::vector<int> holdingCollection(high - low + 1, 0);
    int left = low;
    int right = mid + 1;
    int holdingCollectionIdx = 0;
    while(left <= mid && right <= high){
        holdingCollection[holdingCollectionIdx++] = (inputCollection[left] <= inputCollection[right]) ? inputCollection[left++] : inputCollection[right++];
    }
    while(left <= mid) { holdingCollection[holdingCollectionIdx++] = inputCollection[left++]; }
    while(right <= high) { holdingCollection[holdingCollectionIdx++] = inputCollection[right++]; }
    for(int i = 0; i < holdingCollection.size(); i++)
    {
        inputCollection[low + i] = holdingCollection[i];
    }
    
}

void mergeSort (std::vector<int> &inputCollection, int low, int high) {
    if (low < high) { // 
        int mid = (low + high) / 2;
        mergeSort(inputCollection, low, mid);
        mergeSort(inputCollection, mid+1, high);
        merge (inputCollection, low, mid, high);
    }
}
