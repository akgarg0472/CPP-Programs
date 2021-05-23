/*Fibonacci series using recursion*/

#include<iostream>

using namespace std;

void fib_series(int n)
{
    int first=0,second=1,temp;

    cout<<first<<"  "<<second<<"  ";

    for(int i=2;i<n;i++)
    {
        temp = first+second;
        cout<<temp<<"  ";
        first = second;
        second=temp;
    }
}

int main()
{
    int n;

    cout<<"Enter length of fibonacci series : ";
    cin>>n;

    fib_series(n);

    return 0;
}
