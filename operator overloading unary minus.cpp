#include<iostream>
using namespace std;

class class1
{
    int x,y;
    public:
    void get_data()
    {
        cout<<"Enter value of x and y = "<<endl;
        cin>>x>>y;
    }
    void show_data()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
    class1 operator -()
    {
        class1 temp;
        temp.x = -x;
        temp.y = -y;
        return temp;
    }
};

int main()
{
    class1 obj1,obj2;
    obj1.get_data();
    obj1 = -obj1;
    obj1.show_data();
    obj2.get_data();
    obj2 = -obj2;
    obj2.show_data();
    return 0;
}
