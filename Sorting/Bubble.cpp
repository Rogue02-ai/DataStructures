// program for bubble sort.

#include <iostream>
using namespace std;

// swap function
void swap(int *x, int *y)
{
    //only swapping addresses.

    int temp = *x;
    *x = *y;
    *y = temp;
}

// main algorithm
void BubbleSort(int A[], int n)
{
    int i, j, flag = 0;

    for (i = 0; i < n - 1; i++)
    {
        //flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
                flag = 1;
            }
        }

        if (flag == 0)
        {
            cout << "Elements are already sorted";
            cout << "\n";
            break;
        }
    }
}

// driver function
int main()
{

    //int i;
    int A[] = {5, 7, 1, 3, 6, 5, 8, 9, 18};
    int n = sizeof(A) / sizeof(A[0]);

    BubbleSort(A, n);

    for (int i = 0; i < n; i++)
    {
        cout << A[i];
        cout << " ";
    }

    return 0;
}