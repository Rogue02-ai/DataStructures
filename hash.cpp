//finding missing elements in an unsorted array using hashtable

#include <iostream>
using namespace std;

int main()
{
    int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7, 11, 8, 11, 17, 14, 17};
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
    cout << max << endl;

    //filling elements into HashTable
    int H[max] = {0};

    for (i = 0; i < size; i++)
    {
        H[A[i]]++;
    }

    //displaying elements whose count is geater than 1.

    for (i = 0; i < max; i++)
    {
        if (H[i] > 1)
        {
            cout << "The duplicate is " << i << " and their occurence is " << H[i] << " times" << endl;
        }
    }

    return 0;
}
