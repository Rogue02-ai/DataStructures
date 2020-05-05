#include <iostream>

using namespace std;

int main()
{
    int arr[20], size, i, c = 0, num, pos;

    cout << "Enter the array size: ";
    cin >> size;

    cout << "Enter the elements: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> num;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            c = c + 1;
            pos = i + 1;
        }
    }
    if (c == 0)
    {
        cout << "Element not found ";
    }
    else
    {
        cout << "Element found at position: " << pos;
    }

    return 0;
}
