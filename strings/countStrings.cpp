#include <iostream>
using namespace std;

int main()
{
    char A[] = "Hey! What's Up?";
    int i, j, space = 0;

    //countng number of spaces
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i - 1] != ' ')
        {
            space--;
        }
    }
    //counting number of elements
    for (j = 0; A[j] != '\0'; j++)
    {
    }

    // subtracting total elements - spaces
    cout << "Length is:" << j - space;
}