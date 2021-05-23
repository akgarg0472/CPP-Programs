/*Implementation of QuickSort Algorithm*/

#include<iostream>

using namespace std;

int Partition(int arr[],int initial,int last)
{
    int pivot = arr[initial];

    int i=initial;
    int j=last;

    while(i<j)
    {
        while(arr[i]<=pivot)
            i++;

        while(arr[j]>pivot)
            j--;

        if(i<j)
            swap(arr[i],arr[j]);
    }

    swap(arr[initial],arr[j]);

    return j;
}

void QuickSort(int arr[],int initial,int last)
{
    if(initial>=last)
        return;

    int p = Partition(arr,initial,last);
    QuickSort(arr,initial,p-1);
    QuickSort(arr,p+1,last);

}

int main()
{
    int arr[] = {100,10,90,20,80,50,70,40,60,30,34,54};
    int n = sizeof(arr)/sizeof(int);

    QuickSort(arr,0,n-1);

    cout<<"\n QuickSorted Array is : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    return 0;
}
