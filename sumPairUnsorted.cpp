#include <iostream>

using namespace std;

int main()
{

    int A[] = {3, 3, 3, 6, 6, 7, 7, 7, 8, 8, 10, 12, 15, 15, 15, 20};
    int i;
    int size = sizeof(A) / sizeof(A[0]);
    int H[20] = {0};

    for (i = 0; i < size; i++)
    {
        H[A[i]]++;
    }

    for (i = 0; i < 20; i++)
    {
        if (H[i] > 1)
        {
            cout << i << " " << H[i] << endl;
        }
    }
}
