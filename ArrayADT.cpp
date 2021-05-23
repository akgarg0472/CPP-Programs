/*Implementation of Array DS in C++*/

/**Array is a sequence of continuous memory blocks of homogeneous type data elements
elements are accessed using unique index number starting from 0
*/

#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int *createArray(int capacity)
{
    int *arr = new int[capacity]{}; //initializing empty array

    if(arr)
        cout<<" Array created successfully"<<endl;
    else
        cout<<" Unable to allocate memory"<<endl;

    return arr;
}

void displayArray(int arr[],int capacity,int totalElements)
{
    int i=0;

    if(totalElements==0)
    {
        cout<<" Empty array"<<endl;
        return;
    }
    else
    {
        cout<<" Array created is : ";
        while(i<totalElements)
        {
            cout<<arr[i]<<" ";
            i+=1;
        }
    }
}

void insertElement(int arr[],int capacity,int c_capacity)
{
    int data;

    if(c_capacity==capacity)
    {
        cout<<" Array is full! Can't insert new element"<<endl;
        return;
    }

    cout<<" Enter element to insert in array : ";
    cin>>data;

    arr[c_capacity] = data;
    cout<<" Element inserted successfully"<<endl;
}

void  modifyData(int arr[],int capacity,int totalElements)
{
    int index,data;

    cout<<" Enter index to modify data : ";
    cin>>index;
    cout<<" Enter new data : ";
    cin>>data;

    arr[index] = data;
    cout<<" Data modified successfully"<<endl;
}

void insertDataAtIndex(int arr[],int capacity,int totalElements)
{
    int index,data;

    if(totalElements==capacity)
    {
        cout<<" Array is full, can't insert new element"<<endl;
        return;
    }

    cout<<" Enter index of array to insert element : ";
    cin>>index;

    if(index>capacity-1)
    {
        cout<<" Index out of range of array"<<endl;
        return;
    }

    cout<<" Enter data of index to insert in array : ";
    cin>>data;

    for(int i=totalElements-1 ; i>=index-1;i--)
        arr[i+1]=arr[i];

    arr[index] = data;

    cout<<" Element successfully inserted"<<endl;
}

void deleteIndexData(int arr[],int index,int capacity,int totalElements)
{
    if(totalElements==0)
    {
        cout<<" Empty array!!!"<<endl;
        return;
    }

    if(index>capacity-1)
    {
        cout<<" Given array index out of range"<<endl;
        return;
    }

    if(index>=totalElements)
    {
        cout<<" Element doesn't exist of given index"<<endl;
        return;
    }

    if(index<=totalElements-1)
    {
        for(int i=index;i<totalElements;i++)
            arr[i] = arr[i+1];
    }

    cout<<" Element deleted successfully"<<endl;
}

void searchArray(int arr[],int capacity,int totalElements)
{
    int data,first,last,mid,flag=0;

    cout<<" Enter element to search in array : ";
    cin>>data;

    sort(arr,arr+totalElements-1);

    first=0;
    last=totalElements;
    mid = (first+last)/2;

    while(first<=last)
    {
        if(arr[mid]==data)
        {
            cout<<" Element is at index "<<mid<<endl;
            flag=1;
            return;
        }

        else if(arr[mid]<data)
            first=mid+1;

        else
            last=mid-1;

        mid = (first+last)/2;
    }

    if(flag==0)
        cout<<" Element not found in the array"<<endl;
}

int totalElements(int arr[],int cap)
{
    int totalElementsInArray=0;
    int i=0;

    for(int i=0;i<cap;i++)
    {
        if(arr[i]!='\0')
            totalElementsInArray++;
    }

    return totalElementsInArray;
}

void reverseArray(int arr[],int capacity,int totalElements)
{
    char ch;

    int i=0,elementscount = totalElements;

    if(totalElements==0)
    {
        cout<<" Can't reverse empty array"<<endl;
        return;
    }

    while(i<totalElements)
    {
        int temp = arr[i];
        int temp1 = arr[totalElements-1];
        arr[i] = temp1;
        arr[totalElements-1] = temp;
        i++;
        totalElements--;
    }

    cout<<" Array successfully reversed"<<endl;
    cout<<" Display reversed array ? "<<endl;
    cin>>ch;
    cout<<endl;

    if(ch=='y' || ch=='Y')
        displayArray(arr,capacity,elementscount);
    else
        return;
}

//main function of program
int main()
{
    int capacity,user_choice;
    char again;

    cout<<endl<<"\t\t\t\t\t******************************";
    cout<<endl<<"\t\t\t\t\t"<<" Array Data Structure Program"<<endl;
    cout<<"\t\t\t\t\t******************************";

    cout<<endl<<endl<<" Enter the size of array to create : ";
    cin>>capacity;
    int *arr = createArray(capacity);

    do
    {
        system("cls");
        cout<<endl;
        cout<<" Available Operations : "<<endl;
        cout<<" **********************"<<endl<<endl;
        cout<<" 1. Insert element in sequence"<<endl;
        cout<<" 2. Display array"<<endl;
        cout<<" 3. Insert an element at specific index"<<endl;
        cout<<" 4. Delete an element in array"<<endl;
        cout<<" 5. Reverse the array"<<endl;
        cout<<" 6. Modify data of certain index"<<endl;
        cout<<" 7. Search an element in array"<<endl;
        cout<<" 8. Count total number of elements in array"<<endl;
        cout<<" 9. Exit the program"<<endl;

        cout<<endl<<endl<<" Enter your choice : ";
        user_choice=_getch();

        switch(user_choice)
        {
            case '1':
                system("cls");
                insertElement(arr,capacity,totalElements(arr,capacity));
                break;

            case '2':
                system("cls");
                displayArray(arr,capacity,totalElements(arr,capacity));
                break;

            case '3':
                system("cls");
                insertDataAtIndex(arr,capacity,totalElements(arr,capacity));
                break;

            case '4':
                system("cls");
                int index;
                cout<<" Enter index to delete element : ";
                cin>>index;
                deleteIndexData(arr,index,capacity,totalElements(arr,capacity));
                break;

            case '5':
                system("cls");
                reverseArray(arr,capacity,totalElements(arr,capacity));
                break;

            case '6':
                system("cls");
                modifyData(arr,capacity,totalElements(arr,capacity));
                break;

            case '7':
                system("cls");
                searchArray(arr,capacity,totalElements(arr,capacity));
                break;

            case '8':
                system("cls");
                cout<<endl<<" Total number of elements entered in array are "<<totalElements(arr,capacity);
                break;

            case '9':
                exit(0);
                break;

            default:
                cout<<" Wrong input! Please try again"<<endl;
                break;
        }

        cout<<endl<<endl<<" Wanna perform other operation? ";
        fflush(stdin);
        cin>>again;
    }while(again!='n' || again!='N');

    return 0;
}
