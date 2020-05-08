#include <iostream>

using namespace std;

int main()
{
    int arr[20], l, h, mid, key, i, size;

    cout << "Enter the array size: ";
    cin >> size;
    cout << "Enter the elements in ascending order: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to be searched: ";
    cin >> key;
    l = 0;
    h = size - 1;
    mid = (l + h) / 2;

    while (l <= h)
    {
        if (arr[mid] == key)
        {
            cout << "Element found at position " << mid + 1 << "\n";
            break;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }

        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        mid = (l + h) / 2;
    }

    if (l > h)
    {
        cout << "Element not found !!";
    }

    return 0;
}