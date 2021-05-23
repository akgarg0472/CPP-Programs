/*Balanced Parentheses Problem*/

/*Stack is a DataStructure in which the element which is inserted in last is taken out first*/
/*In other words, Last In First Out (LIFO)*/
/*Insertion in stack is called as PUSH operation*/
/*Removal or extraction of element from stack is called as POP operation*/

#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

bool isBalanced(char *str,int n)
{
    stack<char>s;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
            s.push(str[i]);

        else if(str[i]==')' || str[i]=='}' || str[i]==']')
        {
            if(s.empty())
                return false;

            else if(str[i]==')' && s.top()!='(')
                return false;

            else if(str[i]==']' && s.top()!='{[')
                return false;

            else if(str[i]=='}' && s.top()!='{')
                return false;

            else
                s.pop();
        }
    }

    return (s.empty() ? true:false);  // important operator expression
    /*known as Ternary Operator.*/
    /*If statement/Expression written before '?' is true then before ':' will be answer*/
    /*otherwise after ':' is answer of expression*/
    /*example : 1+2==3 ? true:false , it return true because 1+2==3 is true statement*/
}

int main()
{
    char input[100];
    cout<<" \n Balanced Parentheses Problem\n";
    cout<<" Enter an Expression : ";
    gets(input);    //gets() is used because it doesn't consider 'space' as delimiter (means string terminator like cin does)

    bool result = isBalanced(input,strlen(input));  //strlen() return total number of characters of a string

    if(result==true)
        cout<<" Expression is Balanced\n";
    else
        cout<<" Expression is Unbalanced\n";

    return 0;
}

