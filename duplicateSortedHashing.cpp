// The array provided is sorted and we are using hashing table.

#include <iostream>

using namespace std;

int main()
{

    int A[] = {3, 3, 3, 6, 6, 7, 7, 7, 8, 8, 10, 12, 15, 15, 15, 20};
    int i;
    int size = sizeof(A) / sizeof(A[0]);
    int H[A[size - 1]] = {0};

    for (i = 0; i < size; i++)
    {
        H[A[i]]++;
    }

    for (i = 0; i < A[size - 1]; i++)
    {
        if (H[i] > 1)
        {
            cout << "The duplicate is " << i << " and their occurence is " << H[i] << " times" << endl;
        }
    }
}
