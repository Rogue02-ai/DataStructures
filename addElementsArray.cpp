#include <iostream>
using namespace std;

int main()
{
    int arr[20], size, insert, index, i;
    cout << "Enter the array size: ";
    cin >> size;

    // adding elements to the array
    cout << "Enter elements of array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    //element to be added at index
    cout << "Enter element to be added: ";
    cin >> insert;
    cout << "Enter index number at which the element has to be appended: ";
    cin >> index;

    for (i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = insert;

    cout << "New array is : ";
    for (i = 0; i < size + 1; i++)
    {
        cout << arr[i];
    }

    return 0;
}