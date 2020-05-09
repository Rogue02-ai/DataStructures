// Array is a series of N natural numbers starting from 1.
// using the formula: n(n+1)/2

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, sum = 0, element, sum_nat;

    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    sum_nat = (arr[i - 1] * (arr[i - 1] + 1)) / 2;
    element = sum_nat - sum;

    cout << "Element is: " << element;

    return 0;
}
