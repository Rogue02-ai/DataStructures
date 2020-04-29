# include <iostream>

using namespace std;


int sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}

int main()
{
int r = sum(7);
cout<< "Program to find sum of natural numbers";
cout<< "Output is:" << r;
return 0;
}
