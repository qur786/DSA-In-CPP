#include <iostream>

using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter size of the array: " << endl;
    cin >> size;
    int *array = new int[size];
    int *reverseArray = new int[size];
    cout << "Enter values: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        reverseArray[i] = array[size - i - 1];
    }
    cout << "Original Array: " << endl;
    printArray(array, size);
    cout << "Reversed Array: " << endl;
    printArray(reverseArray, size);
    return 0;
}