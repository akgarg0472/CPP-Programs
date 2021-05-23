/*Implementation of Double Ended Queue using Array*/

/*Queue is a linear Data Structure
In Double Ended Queue, both insertion & Deletion is done at
rear end and front end (starting end)
Queue can be implemented using Array or Linked List
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

    void enQueueFront(int queue[],int capacity)
    {
        if(FRONT==capacity-1)
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
            queue[FRONT]=data;
        }
        else
        {
            if(FRONT==0 && REAR==0)
        }
        cout<<" Data pushed into Queue successfully";
    }

    void enQueueRear(int queue[],int capacity)
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
            if(REAR>FRONT)
            {
                REAR++;
                queue[REAR]=data;
            }
            else
            {
                cout<<" Can't override previous entered value";
                return;
            }
        }
        cout<<" Data pushed into Queue successfully";
    }

    void deQueueFront(int queue[])
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

    void deQueueRear(int queue[])
    {
        if(REAR==-1)
            cout<<" Queue UNDERFLOW, can't perform deQueue";

        else
        {
            if(REAR>=FRONT)
            cout<<" Element removed is "<<queue[FRONT];
            REAR--;
        }
    }

    void displayQueue(int queue[])
    {
        if(FRONT==-1 && REAR==-1)
        {
            cout<<" Queue is Empty";
            return;
        }

        cout<<" Queue is : ";
        for(int i=0;i<=REAR;i++)
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
        cout<<" 1. enQueue at front\n";
        cout<<" 2. enQueue at rear\n";
        cout<<" 3. deQueue at front\n";
        cout<<" 4. deQueue at rear\n";
        cout<<" 5. Display Queue\n";
        cout<<" 6. Exit Program\n\n";
        cout<<" Enter your choice : ";
        cin>>user_choice;

        switch(user_choice)
        {
            case 1:
                system("cls");
                aq.enQueueFront(queue,capacity);
                break;

            case 2:
                system("cls");
                aq.enQueueRear(queue,capacity);
                break;

            case 3:
                system("cls");
                aq.deQueueFront(queue);
                break;

            case 4:
                system("cls");
                aq.deQueueRear(queue);
                break;

            case 5:
                system("cls");
                aq.displayQueue(queue);
                break;

            case 6:
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

