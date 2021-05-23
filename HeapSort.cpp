#include<iostream>

using namespace std;

void heapify(int arr[],int n,int i)
{
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    while(l<=n && arr[l]>arr[largest])
    {
        largest = l;
    }

    while(r<=n && arr[r]>arr[largest])
    {
        largest = r;
    }

    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void HeapSort(int arr[],int n)
{
    for(int i = n/2-1; i>=0;i--)
    {
        heapify(arr,n,i);
    }

    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i-1,0);
    }
}

int main()
{
    cout<<"\n";
    cout<<"\t\t\t\t\t\t***********\n";
    cout<<"\t\t\t\t\t\t Heap Sort\n";
    cout<<"\t\t\t\t\t\t***********\n";

    int arr[]={100,10,90,20,80,30,70,40,60,50};
    int n = sizeof(arr)/sizeof(int);

    HeapSort(arr,n);

    cout<<"\n Heap Sort result is : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
