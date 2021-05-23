
/*CPP Program to implement single inheritance*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<cstdio>
using namespace std;

struct date
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

class patient_info
{
    char name[100],disease[50];
    struct date adm,dis;

    protected:
    void patient_information()
    {
        cout<<"Patient Name : ";
        fflush(stdin);
        cin.getline(name,100);
        cout<<"Admission Date : ";
        cin>>adm.day>>adm.month>>adm.year;
        cout<<"Disease : ";
        fflush(stdin);
        cin.getline(disease,50);
        cout<<"Discharge date : ";
        cin>>dis.day>>dis.month>>dis.year;
    }
    void show_information()
    {
        cout<<"Patient name is : "<<name<<endl;
        cout<<"Admission date is : "<<adm.day<<"-"<<adm.month<<"-"<<adm.year<<endl;
        cout<<"Patient disease is : "<<disease<<endl;
        cout<<"Discharge date is : "<<dis.day<<"-"<<dis.month<<"-"<<dis.year<<endl;
    }
};

class add_info : public patient_info
{
    int age;
    char dept[50];

    public:
    void getinfo()
    {
        patient_information();
        cout<<"Patient age : ";
        cin>>age;
    }
    void show_info()
    {
        show_information();
        cout<<"Age of patient is : "<<age<<" years"<<endl<<endl;
    }
    int getage()
    {
        return age;
    }
};

int main()
{
    int n;
    system("cls");
    cout<<endl<<"--------------------------------------------------------"<<endl;
    cout<<"|\t\tHOSPITAL MANAGEMENT SYSTEM\t\t|"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<endl<<"Enter total number of patient record to be added = ";
    cin>>n;
    add_info obj[n];
    cout<<endl<<"--------------------------------------------------"<<endl;
    cout<<"\t\tEnter patient details"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    for (int i=1;i<=n;i++)
    {
        cout<<endl<<"Enter info of patient "<<i<<endl;
        obj[i].getinfo();
    }
    cout<<endl<<"--------------------------------------------------"<<endl;
    cout<<"\t\tDisplaying patient info"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<endl<<"Displaying patient "<<i<<" info"<<endl;
        cout<<"--------------------------"<<endl;
        obj[i].show_info();
    }
    cout<<endl<<"*********************************************************"<<endl;
    cout<<"\t\tDisplaying patient(s) under age 12"<<endl;
    cout<<"*********************************************************"<<endl;

    for(int i=1;i<=n;i++)
    {
        if(obj[i].getage()<12)
        {
            obj[i].show_info();
        }
        else
        {
            continue;
        }
    }
    _getch();
    return 0;
}
