/*Calculation of GCD using recursion*/

#include<iostream>

using namespace std;

int gcd(int m,int n)
{
    //using Euclidean theorem concept
    if(m == n)
        return m;

    if(m%n == 0)
        return n;

    if(n%m == 0)
        return m;

    if(m>n)
        return gcd(m%n,n);
    else
        return gcd(m,n%m);
}

int main()
{
    int m,n;

    cout<<"Enter first number : ";
    cin>>m;
    cout<<"Enter second number : ";
    cin>>n;

    cout<<endl<<"GCD of "<<m<<" & "<<n<<" is "<<gcd(m,n)<<endl;

    return 0;
}
