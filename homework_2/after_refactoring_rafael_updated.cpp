#include <iostream>

const int arraySize = 10;

void inputArray(int array[], const int size);
bool doesTheSequenceIncrease(const int array[], const int size);

int main() 
{
    
    int array[arraySize];

    inputArray(array, arraySize);

    bool result = doesTheSequenceIncrease(array, arraySize);

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


void inputArray(int array[], const int size)
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << "Введите " << i + 1 << " элемент, принадлежащий множеству целых чисел: ";
        std::cin >> array[i];
    }
}

bool doesTheSequenceIncrease(const int array[], const int size) 
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




