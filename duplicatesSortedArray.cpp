// finding and counting duplicates in a sorted array.

#include <iostream>
using namespace std;

int main()
{
    int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int i, j = 0, size;
    size = sizeof(A) / sizeof(A[0]);

    for (i = 0; i < size - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            j = i + 1;
            while (A[j] == A[i])
                j++;
            cout << A[i] << " is appearing " << j - i << " times." << endl;
            i = j - 1;
        }
    }

    return 0;
}
