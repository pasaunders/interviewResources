#include <vector>
#include <algorithm>

int partition(std::vector<int> &a, int i, int j) {
    int pivot = a[i];
    int tracker = i;
    for(int k =  i + 1; k <= j; k++)
    {
        if (a[k] < pivot) {
            tracker++;
            std::swap(a[k], a[tracker]);
        }
    }
    std::swap(a[i], a[tracker]);
    return tracker;
}

void quickSort (std::vector<int> &a, int low, int high) {
    if (low < high) {
        int pivotPoint = partition(a, low, high);
        quickSort(a, low, pivotPoint -1);
        quickSort(a, pivotPoint + 1, high);
    }
}