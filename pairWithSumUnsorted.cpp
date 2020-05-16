// finding a pair with given sum 'k' in an unsorted array.

#include <iostream>
using namespace std;

int main()
{

    int A[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int i, sum = 15, size;
    size = sizeof(A) / sizeof(A[0]);
    int max = A[0];

    // finding highest element in the array
    for (i = 0; i < size; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }

    // initializing hashtable with 0
    int H[max] = {0};

    //logic
    for (i = 0; i < max; i++)
    {
        if (H[sum - A[i]] != 0 && sum - A[i] > 0)
        {
            cout << A[i] << " + " << sum - A[i] << " = " << sum << endl;
        }
        H[A[i]]++;
    }
}