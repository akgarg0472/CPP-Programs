/*Program to print all permutations*/

#include<bits/stdc++.h>
#include<conio.h>
#include<string.h>

using namespace std;

void swap(char *a,char *b)
{
        char ch;
        ch=*a;
        *a=*b;
        *b=ch;
}

void permutations(char *str,int i,int n)    //n=last index
{
    static int count;
    int j=0;

    if(i==n)
    {
        count++;
        cout<<count<<" "<<str<<"\n";
    }

    else
    {
        for(j=i;j<=n;j++)
        {
            swap((str+i),(str+j));
            permutations(str,i+1,n);
            swap((str+i),(str+j));
        }
    }
}


//int StringPermutations::count=0;

int main()
{
    //ios_base::sync_with_stdio(0);

    char *str;
    str = "ABC";

    permutations(str,0,strlen(str)-1);

    return 0;
}
