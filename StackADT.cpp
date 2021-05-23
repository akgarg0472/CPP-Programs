/*Implementation of stack using C++*/

/**Stack is a linear Data Structure
Follows LIFO (Last In First Out)
Insertion operation called as PUSH operation
Extraction operation is called as POP operation
PUSH & POP operation is performed only on TOP end of Stack
Stack is implemented using dynamic or static arrays/Linked List
Stack is basically an array with certain limitations
*/

#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class ArrayStack
{
    private:
    static int TOP; //only one copy of TOP will be created for whole program

    public:
    int *createStack(int MAX)
    {
        int *stack = new int[MAX]{};

        if(stack)
            cout<<" Stack created successfully"<<endl;
        else
            cout<<" Unable to allocate memory to stack"<<endl;

        return stack;
    }

    void PUSH(int stack[],int MAX)
    {
        int data;

        if(TOP<MAX)
        {
            cout<<" Enter data to PUSH in stack : ";
            cin>>data;
            TOP++;
            stack[TOP] = data;
            cout<<" Data PUSHED successfully in stack"<<endl;
        }

        else
            cout<<" Stack is OVERFLOW"<<endl;
    }

    void POP(int stack[])
    {
        if(TOP!=-1)
        {
            int data = stack[TOP];
            cout<<" POP Operation successfully performed"<<endl;
            cout<<" POP element is "<<data<<endl;
            TOP--;
        }

        else
            cout<<" Stack is UNDERFLOW"<<endl;
    }

    int isFull(int stack[],int MAX)
    {
        if(TOP == MAX-1)
            return 1;
        else
            return 0;
    }

    int isEmpty(int stack[])
    {
        if(TOP == -1)
            return 1;
        else
            return 0;
    }

    void displayStack(int stack[])
    {
        if(TOP==-1)
            cout<<" Stack is Empty"<<endl;

        else
        {
            cout<<" Stack created is : ";
            for(int i=0;i<=TOP;i++)
                cout<<stack[i]<<" ";
        }
    }
};

int ArrayStack::TOP=-1; //initialization of static variable TOP

//main function
int main()
{

    int MAX;
    int user_choice;
    char choice;

    cout<<endl;
    cout<<"\t\t\t\t\t\t********************"<<endl;
    cout<<"\t\t\t\t\t\tSTACK DATA STRUCTURE"<<endl;
    cout<<"\t\t\t\t\t\t********************"<<endl;

    ArrayStack as;  //object of ArrayStack class
    cout<<endl<<" Enter the size of stack : ";
    cin>>MAX;

    if(MAX<=0)
    {
        cout<<" Invalid input size of stack"<<endl;
        cout<<" Program will be terminated now";
        return -1;
    }

    int *stack = as.createStack(MAX);

    do
    {
        system("cls");
        cout<<endl;
        cout<<"**********************"<<endl;
        cout<<" Available Operations"<<endl;
        cout<<"**********************"<<endl;
        cout<<endl;
        cout<<" 1. PUSH Operation"<<endl;
        cout<<" 2. POP Operation"<<endl;
        cout<<" 3. Display Stack"<<endl;
        cout<<" 4. Exit Program"<<endl<<endl;

        cout<<" Enter your choice : ";
        fflush(stdin);
        cin>>user_choice;

        switch(user_choice)
        {
            case 1:
                system("cls");
                as.PUSH(stack,MAX);
                break;

            case 2:
                system("cls");
                as.POP(stack);
                break;

            case 3:
                system("cls");
                as.displayStack(stack);
                break;

            case 4:
                exit(0);
                break;

            default:
                cout<<" INVALID CHOICE INPUT!!"<<endl;
                break;
        }

        cout<<endl<<" Wanna perform other operation : ";
        fflush(stdin);
        cin>>choice;
    }while(choice== 'Y' || choice=='y');

    return 0;
}
