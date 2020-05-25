// a string is valid only if it contains alphanumeric characters

#include <iostream>
using namespace std;

int valid(char *name)
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        // checking for invalid characters
        if (!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 98 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57))
        {
            return 0;
        }
    }
    //returning true if we reach end of the string without experiencing any invalid character
    return 1;
}

int main()
{
    char *name = "Ani@#$l";
    if (valid(name))
    {
        cout << "Valid";
    }
    else
    {
        cout << "Invalid";
    }
}
