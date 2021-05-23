/*Factorial of a number using recursion*/

#include<iostream>

using namespace std;

int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
}

int main()
{
    int n;

    cout<<" Enter number to find factorial : ";
    cin>>n;

    if(n<0)
    {
        cout<<" Invalid input!!";
        return 1;
    }

    else
    {
        unsigned int result=fact(n);
        cout<<" Factorial of "<<n<<" is : "<<result;
    }

    return 0;
}
