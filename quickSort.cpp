#include <vector>
#include <algorithm>
#include <random>

int partition(std::vector<int> &a, int i, int j) {
    int pivot = a[i]; // get pivot point
    int tracker = i; //track the most recent value less than the pivot point
    for(int k =  i + 1; k <= j; k++) //iterate through the vector, starting just after the pivot point.
    {
        if (a[k] < pivot) {
            tracker++;
            std::swap(a[k], a[tracker]);
        }
    }
    std::swap(a[i], a[tracker]);
    return tracker;
}

void quickSortRecurse(std::vector<int> &a, int low, int high) {
    if (low < high) {
        int pivotPoint = partition(a, low, high);
        quickSortRecurse(a, low, pivotPoint -1);
        quickSortRecurse(a, pivotPoint + 1, high);
    }
}

void quickSort (std::vector<int> &a, int low, int high) {
    //setup quicksort to choose random indexes outside the recursive calls
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(low, high);
    int startingPivotIndex = dis(gen);
    std::swap(a[low], a[startingPivotIndex]);
    quickSortRecurse(a, low, high);
}
