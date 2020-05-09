//finding duplicates and teir occurence using hash_table

#include <iostream>
using namespace std;

int main()
{
    int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int size = sizeof(A) / sizeof(A[0]), i;
    int H[A[size - 1]] = {};

    for (i = 0; i < size; i++)
    {
        H[A[i]]++;
    }

    for (i = 0; i < A[size - 1]; i++)
    {
        if (H[i] > 1)
        {
            cout << "Element is: " << i << " and occurence is: " << H[i] << endl;
        }
    }

    return 0;
}