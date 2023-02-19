#include <iostream>
#include <stdlib.h>

using namespace std;

bool checkBoundary(int pos, int size)
{
    bool isValid = true;
    if (pos < 0 || pos > size)
    {
        cout << endl;
        cout << "Index out of bound error" << endl;
        exit(1);
        isValid = false;
    }
    return isValid;
}

void printArray(int *array, int size)
{
    if (array)
    {
        cout << endl;
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
}

int *deleteItem(int *array, int size, int pos)
{
    int *newArray = NULL;
    bool isValid = checkBoundary(pos, size);
    if (isValid == true)
    {
        newArray = new int[size - 1];
        int i = 0;
        while (i != pos)
        {
            newArray[i] = array[i];
            i++;
        }
        i++;
        while (i != size)
        {
            newArray[i - 1] = array[i];
            i++;
        }

        delete[] array;
    }
    return newArray;
}

int main()
{
    int size = 0, pos;
    cout << "Enter size of the array: " << endl;
    cin >> size;
    int *array = new int[size];
    cout << "Insert values: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    printArray(array, size);
    cout << "Enter index to delete: ";
    cin >> pos;
    array = deleteItem(array, size, pos);
    printArray(array, size - 1);
    delete[] array;
    return 0;
}