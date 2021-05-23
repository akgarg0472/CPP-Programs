/*Tower of Hanoi*/

#include<iostream>

using namespace std;

/*We have 3 rods A,B,C and n disks in rod A initially.
-Move top n-1 disks from source rod to auxiliary rod
-Move nth disk from source to destination rod
-move n-1 disks from auxiliary rod to destination rod*/

void toh(int n,char A,char B,char C)
{
    if(n>=1)
    {
        toh(n-1,A,C,B);
        cout<<A<<" to "<<C<<endl;
        toh(n-1,B,A,C);
    }
}

int main()
{
    char A,B,C;
    int n;

    cout<<"Enter number of disks : ";
    cin>>n;

    toh(n,'A','B','C');
    return 0;
}
