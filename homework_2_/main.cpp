#include <iostream>
#include "sortings.hpp"
#include "io.hpp"

int main() {

    int arr[] = {10, 8, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
    printArray(arr, n);
    
    return 0;
}