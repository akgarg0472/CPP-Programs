/*Generic function program that will sort an array of integer, float value.*/

#include<iostream>
#include<conio.h>
#include<algorithm>

using namespace std;

template <class X>
void GenericSort(X arr[],int n) //using bubble sort logic to sort array
{
    sort(arr,arr+n);

    cout<<"Displaying sorted array : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    system("cls");
    cout<<"\n\t****************************************************************\n";
    cout<<"\t*Program to create generic function sorting int and float array*\n";
    cout<<"\t****************************************************************\n";

    char user_choice;

    while(1)
    {
        cout<<"\n Enter 1 to sort an integer array\n";
        cout<<" Enter 2 to sort a float array\n";
        cout<<" Press ESC to quit program\n";
        cout<<"\n Enter your choice input : ";

        user_choice = getch();

        if(user_choice==49) //49 is ASCII code of 1
        {
            cout<<"\n\n\n *****************\n";
            cout<<" * Integer Array *\n";
            cout<<" *****************\n";

            cout<<" Enter total number of elements in integer array : ";
            int n;
            cin>>n;
            int arr[n];

            cout<<" Enter elements of array : \n";
            for(int i=0;i<n;i++)
            {
                cout<<" Element "<<i+1<<" : ";
                cin>>arr[i];
            }

            GenericSort(arr , n);

            getch();
            system("cls");
        }

        else if(user_choice==50)    //50 is ASCII code of 23
        {
            cout<<"\n\n\n *****************\n";
            cout<<" *  Float Array  *\n";
            cout<<" *****************\n";

            cout<<" Enter total number of elements in float array : ";
            int n;
            cin>>n;
            float arr[n];

            cout<<" Enter elements of array : \n";
            for(int i=0;i<n;i++)
            {
                cout<<" Element "<<i+1<<" : ";
                cin>>arr[i];
            }

            GenericSort(arr , n);

            getch();
            system("cls");
        }
        else if(user_choice==27)    //27 is ASCII code of ESC
        {
            exit(0);
        }
        else
        {
            cout<<"\n\n Wrong input!!";
            getch();
            system("cls");
        }
    }

    getch();
    return 0;
}
