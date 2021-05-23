/*Program to implement subscript[] operator overloading*/
#include<iostream>
using namespace std;

class class1
{
    int a[10];
    public:
    void input(int index,int value)
    {
        a[index] = value;
    }
    void display()
    {
        for(int i=0;i<10;i++)
            cout<<a[i]<<" ";
    }
    int operator [](int index)
    {
        return (a[index]);
    }
};

int main()
{
    class1 obj;

    for(int i=0;i<10;i++)
    {
        obj.input(i,10*i);
    }

    for(int i=0;i<10;i++)
    {
        cout<<obj[i]<<" ";
    }

    cout<<endl;
    obj.display();
    return 0;
}
