// checking length of a string
// changing case of a string.

#include <iostream>
using namespace std;

int main()
{
    char A[] = "Welcome";
    char B[] = "HELLOWORLD";

    //CHECKING LENGTH A
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        cout << A[i];
    }
    cout << endl;
    cout << "length is: " << i << endl;

    //CHANGING CASE OF STRING B(using AsCII codes)
    int j = 0;
    cout << "Original String: " << B << endl;
    for (j = 0; B[j] != '\0'; j++)
    {
        B[j] = B[j] + 32; // if we want to change to lower case subtract 32.
    }
    cout << "the changed case string: " << B;

    return 0;
}