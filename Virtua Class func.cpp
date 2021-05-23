/**/
#include<iostream>
#include<conio.h>

using namespace std;

class A
{
    public:
    void func()
    {
        cout<<"Func of class A";
    }
};

class B : virtual public A
{
    public:
    void func1()
    {
        cout<<"In class B";
    }
};

class C : virtual public A
{
    public:
    void func2()
    {
        cout<<"In class C";
    }
};

class D : public B,public C
{
    public:
    void func3()
    {
        cout<<"In class D";
    }
};

int main()
{
    D obj;
    obj.func();
    _getch();
    return 0;
}
