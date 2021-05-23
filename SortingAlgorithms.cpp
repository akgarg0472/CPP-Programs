/*Implementation of Selection Sort, Bubble Sort and insertion sort sorting algorithm*/

#include<iostream>
#include<conio.h>

using namespace std;

class SortingAlgorithms
{
    public:
    void selectionSort(int arr[],int n)
    {
        int min_element_index;

        for(int i=0;i<n-1;i++)
        {
            min_element_index = i;

            for(int j=i+1;j<n;j++)
            {
                if(arr[j] <= arr[min_element_index])
                    min_element_index = j;
            }

            if(min_element_index != i)
                swap(arr[i] , arr[min_element_index]);
        }
    }


    void bubbleSort(int arr[],int n)
    {
        int flag=0;

        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(arr[j] > arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    flag=1;
                }
            }

            if(flag==0)
            {
                return;
            }
        }
    }


    void insertionSort(int arr[],int n)
    {
        int temp;

        for(int i=1;i<n;i++)
        {
            temp = arr[i];
            int j = i-1;

            while(j>=0 && temp<arr[j])
            {
                arr[j+1] = arr[j];
                j--;
            }

            arr[j+1] = temp;
        }
    }

    void displayArray(int arr[],int n)
    {
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
    }
};


int main()
{
    SortingAlgorithms sa;
    int n,user_choice;
    char again;

    cout<<endl;
    cout<<"\t\t\t\t\t*******************\n";
    cout<<"\t\t\t\t\t Sorting Algorithm\n";
    cout<<"\t\t\t\t\t*******************\n";

    cout<<"\n Enter the total elements of array : ";
    cin>>n;
    int arr[n] = {};

    cout<<" Enter elements of array : \n";
    for(int i=0;i<n;i++)
    {
        cout<<" Element "<<i+1<<" : ";
        cin>>arr[i];
    }

    do
    {
        system("cls");
        cout<<" 1. Selection Sort\n";
        cout<<" 2. Bubble Sort\n";
        cout<<" 3. Insertion Sort\n";
        cout<<"\n Enter choice : ";
        cin>>user_choice;

        switch(user_choice)
        {
            case 1:
                cout<<" Selection Sorted array is : ";
                sa.selectionSort(arr,n);
                sa.displayArray(arr,n);
                break;

            case 2:
                cout<<" Bubble Sorted array is : ";
                sa.bubbleSort(arr,n);
                sa.displayArray(arr,n);
                break;

            case 3:
                cout<<" Insertion sorted array is : ";
                sa.insertionSort(arr,n);
                sa.displayArray(arr,n);
                break;

            default:
                cout<<" Invalid Input";
                _getch();
                break;
        }

        cout<<"\n Wanna do other operation : ";
        cin>>again;
    }while(again=='y' || again=='Y');

    return 0;
}
