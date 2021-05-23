/*Program to implement Single Linked List*/

#include<iostream>
#include<conio.h>

using namespace std;

class Node
{
    public:
    int info;
    Node* link;     //pointer to point the next node

    Node(int data)
    {
        info=data;
    }
};

void displayLinkedList(Node* node)
{
    if(node==NULL)
    {
        cout<<" Empty Linked List";
        return;
    }

    else
    {
        cout<<" Linked List is : ";
        while(node!=NULL)
        {
            cout<<node->info<<" ";
            node = node->link;
        }
    }
}

void reverseLinkedList(Node* node)
{
    Node* current = node;
    Node* prev = NULL;
    Node* next  = NULL;

    while(current!=NULL)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }

    node = prev;
    cout<<"\n Reversed";
    displayLinkedList(node);
}

int main()
{
    cout<<"\t\t\t\t\t**************************\n";
    cout<<"\t\t\t\t\tLinked list Data Structure\n";
    cout<<"\t\t\t\t\t**************************\n";

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);

    node1->link = node2;
    node2->link = node3;
    node3->link = node4;
    node4->link = node5;
    node5->link=NULL;

    Node* START = node1;

    displayLinkedList(START);
    reverseLinkedList(START);
    return 0;
}
