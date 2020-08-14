// Program to create insertion sort on arrays.
#include <iostream>
using namespace std;

// function for isertion sort.
void insertion(int A[], int n)
{

    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

// driver code
int main()
{
    int i;
    int A[] = {5, 7, 1, 2, 4, 6, 9, 11, 13};
    int n = sizeof(A) / sizeof(A[0]);

    insertion(A, n);

    // displaying the list after sorting
    for (i = 0; i < n; i++)
    {
        cout << A[i];
        cout << " ";
    }

    return 0;
}