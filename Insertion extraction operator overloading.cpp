#include<iostream>
using namespace std;

class input
{
    int a;
    char b[20];
    public:
    friend istream &operator >>(istream &in,input &d)
    {
        cout<<"Enter value of a = ";
        in>>d.a;
        cout<<"Enter value of string b = ";
        in>>d.b;
    }
    friend input &operator <<(ostream &op,input &d)
    {
        op<<"a = "<<d.a<<endl;
        op<<"b = "<<d.b;
        return d;
    }
};

int main()
{
    input d1;
    cin>>d1;
    cout<<d1;
    return 0;
}
