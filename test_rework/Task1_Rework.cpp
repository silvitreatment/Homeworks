#include <iostream>

int main() {
    
    const int arr[] = {3, 6, 5, 9, 10};
    const int size = sizeof(arr) / sizeof(arr[0]);
    int maxNum = arr[0];
    int minNum = arr[0];
    
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
    }

    double ratio = double(maxNum) /  minNum;

    std::cout << "Массив: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Максимальное значение: " << maxNum << std::endl;
    std::cout << "Минимальное значение: " << minNum << std::endl;
    std::cout << "Во сколько раз максимальное больше минимального: " << ratio << std::endl;

    return 0;
}
