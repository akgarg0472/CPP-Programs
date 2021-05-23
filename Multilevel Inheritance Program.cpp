/*CPP Program to implement multilevel inheritance*/

#include<iostream>
#include<string>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

class employee
{
    protected:
    char name[50];
    int salary;

    public:
    void get_emp_data()
    {
        cout<<endl<<"Enter Employee name : ";
        fflush(stdin);
        cin.getline(name,50);
        cout<<"Enter employee salary : ";
        cin>>salary;
    }
    void show_emp_data()
    {
        cout<<endl<<"Name of employee is : "<<name<<endl;
        cout<<"Salary of employee is : "<<salary<<" Rs/Month"<<endl;
    }
};

class manager : protected employee
{
    protected:
    string department;
    /*Name and salary variables inherited from employee class*/

    public:
    void get_mgr_data()
    {
        cout<<endl<<"Enter manager name : ";
        fflush(stdin);
        cin.getline(name,50);
        cout<<"Enter manager department : ";
        fflush(stdin);
        getline(cin,department);
        cout<<"Enter manager salary : ";
        cin>>salary;
    }
    void show_mgr_data()
    {
        cout<<endl<<"Name of manager is : "<<name<<endl;
        cout<<"Department of manager is : "<<department<<endl;
        cout<<"Salary of manager is : "<<salary<<" Rs/Month"<<endl;
    }
};

class executive : protected manager
{
    public:
    void get_exe_data()
    {
        cout<<endl<<"Enter executive name : ";
        fflush(stdin);
        cin.getline(name,50);
        cout<<"Enter executive department : ";
        fflush(stdin);
        getline(cin,department);
        cout<<"Enter executive salary : ";
        cin>>salary;
    }
    void show_exe_data()
    {
        cout<<endl<<"Name of executive is : "<<name<<endl;
        cout<<"Department of executive is : "<<department<<endl;
        cout<<"Salary of executive is : "<<salary<<" Rs/Month"<<endl;
    }
};

int main()
{
    int n;
    system("cls");
    cout<<endl;

    cout<<"-------------------------------------------------"<<endl;
    cout<<"|\t\tCompany Management\t\t|"<<endl;
    cout<<"-------------------------------------------------"<<endl;

    cout<<"-------------------------------------------------"<<endl;
    cout<<"|\t\tEnter details\t\t\t|"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    employee emp1;
    emp1.get_emp_data();

    manager mgr1;
    mgr1.get_mgr_data();

    executive exe1;
    exe1.get_exe_data();

    cout<<endl<<"-------------------------------------------------"<<endl;
    cout<<"|\t\tDisplaying details\t\t|"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    emp1.show_emp_data();
    mgr1.show_mgr_data();
    exe1.show_exe_data();

    _getch();
    return 0;
}
