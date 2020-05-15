//finding duplicates in an unsorted array without using extra space

#include <iostream>
using namespace std;

int main()
{
    int A[] = {8, 3, 6, 4, 5, 6, 8, 2, 7, 3, 8, 4, 4};
    int size, i, j, count;
    size = sizeof(A) / sizeof(A[0]);

    for (i = 0; i < size; i++)
    {
        // -1 representing no element is present.
        if (A[i] != -1)
        {
            count = 1;
            for (j = i + 1; j < size; j++)
            {
                if (A[i] == A[j])
                {
                    count++;

                    A[j] = -1; //replacing duplicates with -1
                }
            }
            if (count > 1)
            {
                cout << "Duplicate: " << A[i] << " and occurence is " << count << " times." << endl;
            }
        }
    }
}