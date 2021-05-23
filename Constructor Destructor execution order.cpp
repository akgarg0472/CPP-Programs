/*Execution order of Constructor and destructor when a class is derived from more than one base class*/
#include<iostream>
#include<conio.h>
using namespace std;

class baseClass1
{
    protected:
    baseClass1()
    {
        cout<<"Constructor of Base Class 1"<<endl;
    }
    ~baseClass1()
    {
        cout<<"Destructor of Base Class 1"<<endl;
    }
};

class baseClass2
{
    protected:
    baseClass2()
    {
        cout<<"Constructor of Base Class 2"<<endl;
    }
    ~baseClass2()
    {
        cout<<"Destructor of Base Class 2"<<endl;
    }
};

class derivedClass1 : protected baseClass1 , protected baseClass2
{
    public:
    derivedClass1()
    {
        cout<<"Constructor of Derived Class 1"<<endl;
    }
    ~derivedClass1()
    {
        cout<<"Destructor of Derived Class 1"<<endl;
    }
};

class derivedClass2 : protected baseClass2 , protected baseClass1
{
    public:
    derivedClass2()
    {
        cout<<"Constructor of Derived Class 2"<<endl;
    }
    ~derivedClass2()
    {
        cout<<"Destructor of Derived Class 2"<<endl;
    }
};

int main()
{
    derivedClass1 object1;
    derivedClass2 object2;
    cout<<endl;
    //getch();
    return 0;
}
