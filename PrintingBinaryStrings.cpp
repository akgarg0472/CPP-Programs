/*Printing all binary strings*/

#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

void bin(int n,char a[])
{
    if(n<1)
        cout<<a<<endl;
    else
    {
        a[n-1]='0';
        bin(n-1,a);
        a[n-1]='1';
        bin(n-1,a);
    }
}

int main()
{
    char a[11];
    a[10]='\0';
    bin(10,a);
    return 0;
}
