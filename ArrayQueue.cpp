/*Implementation of Queue using Array*/

/*Queue is a linear Data Structure
In normal Queue, insertion is performed at rear end
Deletion is done at front end (starting end)
Queue can be implemented using Array or Linked List
Queue follows FIFO (First in First Out) principle
Insertion operation is called as enQueue
Deletion operation is called as deQueue
*/

#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class ArrayQueue
{
    static int FRONT,REAR;

    public:
    int *CreateQueue(int capacity)
    {
        int *queue = new int[capacity]{};
        if(queue)
            cout<<" Queue Successfully Created\n";
        else
            cout<<" Unable to allocate memory\n";

        return queue;
    }

    void enQueue(int queue[],int capacity)
    {
        if(REAR == capacity-1)
        {
            cout<<" Queue is OVERFLOW";
            return;
        }

        int data;
        cout<<" Enter element to enter in the queue : ";
        cin>>data;

        if(FRONT==-1 && REAR==-1)
        {
            FRONT=0;
            REAR=0;
            queue[REAR]=data;
        }
        else
        {
            REAR++;
            queue[REAR]=data;
        }
        cout<<" Data pushed into Queue successfully";
    }

    void deQueue(int queue[])
    {
        if(FRONT==-1)
            cout<<" Queue UNDERFLOW, can't perform deQueue";

        else
        {
            if(FRONT<=REAR)
            cout<<" Element removed is "<<queue[FRONT];
            FRONT++;
        }
    }

    void displayQueue(int queue[])
    {
        if(FRONT==-1)
        {
            cout<<" Queue is Empty";
            return;
        }

        cout<<" Queue is : ";
        for(int i=FRONT;i<=REAR;i++)
        {
            cout<<queue[i]<<" ";
        }
    }
};

int ArrayQueue::FRONT=-1;
int ArrayQueue::REAR=-1;

int main()
{
    int capacity,user_choice;
    char again;

    cout<<"\n\t\t\t\t\t\t********************\n";
    cout<<"\t\t\t\t\t\tQueue Data Structure\n";
    cout<<"\t\t\t\t\t\t********************\n";


    cout<<" Enter size of Queue to create : ";
    cin>>capacity;
    ArrayQueue aq;
    int *queue = aq.CreateQueue(capacity);

    do
    {
        system("cls");
        cout<<"**********************\n";
        cout<<" Available Operations\n";
        cout<<"**********************\n";
        cout<<" 1. enQueue Operation\n";
        cout<<" 2. deQueue Operation\n";
        cout<<" 3. Display Queue\n";
        cout<<" 4. Exit Program\n\n";
        cout<<" Enter your choice : ";
        cin>>user_choice;

        switch(user_choice)
        {
            case 1:
                system("cls");
                aq.enQueue(queue,capacity);
                break;

            case 2:
                system("cls");
                aq.deQueue(queue);
                break;

            case 3:
                system("cls");
                aq.displayQueue(queue);
                break;

            case 4:
                system("cls");
                cout<<" Exiting Program";
                exit(0);
                break;

            default:
                cout<<" Invalid Input!!";
                break;
        }

        cout<<"\n\n Want to perform other operation : ";
        cin>>again;
    }while(again=='Y' || again=='y');

    return 0;
}
