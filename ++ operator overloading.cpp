/*post pre increament operator overloading*/
#include<iostream>
using namespace std;

class class1
{
    int x,y;
    public:
    void get_data()
    {
        cout<<"Enter value of x & y = ";
        cin>>x>>y;
    }
    void show_data()
    {
        cout<<"value of x = ";
        cout<<x<<endl;
        cout<<"value of y = ";
        cout<<y;
    }
    class1 operator ++(int)
    {
        class1 temp;
        temp.x = x++;
        temp.y = y++;
        return temp;
    }
    class1 operator ++()
    {
        class1 temp;
        temp.x = ++x;
        temp.y = ++y;
        return temp;
    }
};

int main()
{
    class1 obj1;
    obj1.get_data();
    obj1++;
    obj1.show_data();
    ++obj1;
    obj1.show_data();
    return 0;
}
