/*Reverse of a Linked List using Stack*/

#include<bits/stdc++.h>
using namespace std;

class LinkedList;
void DisplayLinkedList(LinkedList*);

class LinkedList
{
    public:
    int data;
    LinkedList* next;
    LinkedList(int x)
    {
        data = x;
    }
};

void ReverseLinkedList(LinkedList *Start)
{
    stack<LinkedList*> s;
    LinkedList *ptr = Start;

    while(ptr!=NULL)
    {
        s.push(ptr);    //passing address of each node
        ptr = ptr->next;
    }

    ptr = s.top();
    Start = ptr;
    s.pop();

    while(!s.empty())
    {
        ptr->next = s.top();
        s.pop();
        ptr = ptr->next;
    }

    ptr->next = NULL;

    DisplayLinkedList(Start);
}

void DisplayLinkedList(LinkedList *Start)
{
    LinkedList *ptr=Start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main()
{
    LinkedList *node1 = new LinkedList(20);
    LinkedList *node2 = new LinkedList(10);
    LinkedList *node3 = new LinkedList(30);
    LinkedList *Start = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    ReverseLinkedList(Start);

    return 0;
}
