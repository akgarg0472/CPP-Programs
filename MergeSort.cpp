/*Implementation of Merge Sort algorithm using C++ & Recursion*/

#include<iostream>

using namespace std;

void Merge(int *,int *,int,int *,int);

void MergeSort(int *arr,int n)
{
    int mid;

    if(n<2)
        return;

    mid = n/2;

    int *left = new int[mid];
    int *right = new int[n-mid];

    for(int i=0;i<mid;i++)
    {
        left[i] = arr[i];
    }
    for(int i=mid;i<n;i++)
    {
        right[i-mid]=arr[i];
    }

    MergeSort(left,mid);
    MergeSort(right,n-mid);

    Merge(arr,left,mid,right,n-mid);
}

void Merge(int *arr,int *left,int lsize,int *right,int rsize)
{
    int i=0,j=0,k=0;

    while(i<lsize && j<rsize)
    {
        if(left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }

        else
        {
            arr[k++] = right[j++];
        }
    }

    while(i<lsize)
    {
        arr[k++] = left[i++];
    }
    while(j<rsize)
    {
        arr[k++] = right[j++];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);

    int arr[]={50,30,70,40,20,60,100,90,10,80};

    int n = sizeof(arr)/sizeof(int);

    cout<<"\n Merge Sorted Array is : ";
    MergeSort(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
