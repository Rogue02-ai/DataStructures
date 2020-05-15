//finding missing elements in an unsorted array using hashtable

#include <iostream>
using namespace std;

int main()
{
    int A[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    int size = sizeof(A) / sizeof(A[0]);
    int i;
    int max = A[0];

    //returning max element for the unsorted array
    for (i = 0; i < size; i++)
    {
        if (A[i] > max)
        {
            max = A[i] + 1;
        }
    }

    //filling elements into HashTable
    int H[max] = {0};

    for (i = 0; i < size; i++)
    {
        H[A[i]]++;
    }

    //displaying values that are zero in the hashtable
    //starting from 1 because the given array's value starts from 1.

    for (i = 1; i < max; i++)
    {
        if (H[i] == 0)
        {
            cout << "Missing element: " << i << endl;
        }
    }

    return 0;
}
