#include <iostream>


const int arraySize = 10;


void inputArray(double array[], int size);
bool isIncreasingSequence(const double array[], int size);
void outputResult(bool isIncreasing);



void inputArray(double array[], int size)
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << "Введите " << i + 1 << " элемент1: ";
        std::cin >> array[i];
    }
}

bool isIncreasingSequence(const double array[], int size) 
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

void outputResult(bool isIncreasing) 
{
    if (isIncreasing) 
    {
        std::cout << "Последовательность возрастает" << std::endl;
    } 
    else 
    {
        std::cout << "Последовательность убывает" << std::endl;
    }
}

int main() 
{
    std::setlocale(LC_ALL, "Russian");
    double array[arraySize];

    
    inputArray(array, arraySize);

    bool result = isIncreasingSequence(array, arraySize);

    outputResult(result);

    return 0;
}
