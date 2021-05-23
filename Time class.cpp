/*Basic program to input and display the time*/
#include<iostream>
#include<conio.h>
using namespace std;

class timeClass
{
    int HR,MIN,SEC;

    public:
    //operator overloading code
    friend istream &operator >>(istream &input,timeClass &time)
    {
        cout<<"Enter time in 24Hr Format\n";
        cout<<"Hour value : ";
        input>>time.HR;
        cout<<"Minute Value : ";
        input>>time.MIN;
        cout<<"Second Value : ";
        input>>time.SEC;
    }
    friend ostream &operator <<(ostream &output,timeClass &time)
    {
        if(time.HR>12)
        {
            output<<"\nTime is : \n";
            output<<time.HR - 12<<":";
            output<<time.MIN<<":";
            output<<time.SEC<<" ";
            output<<"PM";
        }
        else
        {
            output<<"Time is : \n";
            output<<time.HR<<":";
            output<<time.MIN<<":";
            output<<time.SEC<<" ";
            output<<"AM";
        }
    }

    //normal code
    void setTime()
    {
        cout<<"Enter time in 24Hr format\n";
        cout<<"Hour value : ";
        cin>>HR;
        cout<<"Minute Value : ";
        cin>>MIN;
        cout<<"Second Value : ";
        cin>>SEC;
    }
    void showTime()
    {
        if(HR>12)
        {
            cout<<"Time is : \n";
            cout<<HR - 12<<":";
            cout<<MIN<<":";
            cout<<SEC<<" ";
            cout<<"PM";
        }
        else
        {
            cout<<"Time is : \n";
            cout<<HR<<":";
            cout<<MIN<<":";
            cout<<SEC<<" ";
            cout<<"AM";
        }
    }
};

int main()
{
    timeClass t1,t2;
    cout<<"Using class object\n";
    t1.setTime();
    t1.showTime();
    cout<<"\n\nDirect using cin and cout\n";
    cin>>t2;
    cout<<t2;
    return 0;
}
