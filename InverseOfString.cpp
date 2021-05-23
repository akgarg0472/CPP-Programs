/*Program to inverse a string using stack DataStructure*/
/*Time Complexity : O(n)*/
/*Extra Space Complexity : O(n)*/

#include<bits/stdc++.h>
using namespace std;

void reverseString(char c[],int n)
{
    stack<char> s;  //defined in stack default library

    for(int i=0;i<n;i++)
        s.push(c[i]);

    for(int i=0;i<n;i++)
    {
        c[i] = s.top();
        s.pop();
    }
}

int main()
{
    char user_input[100];
    cout<<"\n Reversal of a string\n";
    cout<<" Enter string to reverse : ";
    gets(user_input);
    reverseString(user_input,strlen(user_input));
    cout<<" Reversed String is : "<<user_input<<endl;

    return 0;
}
