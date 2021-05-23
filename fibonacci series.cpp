#include<iostream>
#include<conio.h>
using namespace std;

class fibonacci
{
    int num=3,a=0,b=1,c;
    public:
    fibonacci(int n)
    {
        cout<<"Term 1 is : 0"<<endl;
        cout<<"Term 2 is : 1"<<endl;
        while(num<=n)
        {
            c = a+b;
            cout<<"Term "<<num<<" is : "<<c<<endl;
            a=b;
            b=c;
            num++;
        }
    }
};

int main()
{
    int n;
    system("cls");
    cout<<"Enter how many terms to print in fib series to print : ";
    cin>>n;
    fibonacci fib(n);
    _getch();
}
