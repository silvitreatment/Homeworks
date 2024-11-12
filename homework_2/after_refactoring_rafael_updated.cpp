#include <iostream>

const int arraySize = 10;

void inputArray(long long array[], const int size);
bool isIncreasingSequence(const long long array[], const int size);

int main() 
{
    
    long long array[arraySize];

    inputArray(array, arraySize);

    bool result = isIncreasingSequence(array, arraySize);

    if (result) 
    {
        std::cout << "Последовательность возрастает" << std::endl;
    } 
    else 
    {
        std::cout << "Последовательность убывает" << std::endl;
    }

    return 0;
}


void inputArray(long long array[], int size)
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << "Введите " << i + 1 << " элемент, принадлежащий множеству целых чисел: ";
        std::cin >> array[i];
    }
}

bool isIncreasingSequence(const long long array[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        if (array[i] > array[i + 1]) 
        {
            return false;
        }
    }
    return true;
}




