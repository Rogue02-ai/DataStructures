//counting vowels and consonants in a string.

#include <iostream>
using namespace std;
int main()
{
    char A[] = "Data Structures And Algorithms";
    int i, vcount = 0, ccount = 0;
    for (i = 0; A[i] != '\0'; i++)
    {
        //checking for vowels
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' ||
            A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')
        {
            vcount++;
        }
        //checking for consonants
        else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
        {
            ccount++;
        }
    }
    cout << "consonant:" << ccount << endl;
    cout << "vowels: " << vcount;
}
