#include <iostream>

bool doesTheSequenceIncrease(const int* const arr, const int size);
void inputArray(int* const arr, const int size);

int main() {
    const int arrSize = 10;
    int arr[arrSize];
    inputArray(arr, arrSize);

    bool isIncreasing = doesTheSequenceIncrease(arr, arrSize);

    if (isIncreasing) {
        std::cout << "Последовательность возрастает" << std::endl;
    } else {
        std::cout << "Последовательность убывает" << std::endl;
    }

    return 0;
}

bool doesTheSequenceIncrease(const int* const arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

void inputArray(int* const arr, const int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Введите " << i + 1 << " элемент, принадлежащий множеству целых чисел: ";
        std::cin >> arr[i];
    }
}
