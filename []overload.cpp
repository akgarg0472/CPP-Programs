/*Program to implement subscript[] operator overloading*/

#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

class vectorImplementation
{
    private:
    vector <int> vec;

    public:
    void addElement(int value)
    {
        vec.push_back(value);
    }
    int operator[](int x)
    {
        return vec.at(x);
    }
};

int main()
{
    vectorImplementation a;
    int n,i=0,value;

    cout<<"Enter number of elements to add : ";
    cin>>n;
    cout<<endl;

    while(i<n)
    {
        cout<<"Enter element to add : ";
        cin>>value;
        a.addElement(value);
        i++;
    }

    cout<<"Displaying elements : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    getch();
}
