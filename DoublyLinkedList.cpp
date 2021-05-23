/*Program to implement Doubly Linked List*/

#include<iostream>
#include<conio.h>

using namespace std;

class Node
{
    public:
    int info;
    Node* next;     //pointer to point the next node
    Node* prev;     //pointer to point the previous node

    Node(int data)
    {
        info=data;
    }
};

void backwardTraversalLinkedList(Node* node)
{
    if(node==NULL)
    {
        cout<<" Empty Linked List";
        return;
    }

    else
    {
        Node* ptr = node;

        while(ptr->next!=NULL)
            ptr = ptr->next;

        while(ptr != NULL)
        {
            cout<<ptr->info<<" ";
            ptr = ptr->prev;
        }
    }
}

void forwardTraversalLinkedList(Node* node)
{
    if(node==NULL)
    {
        cout<<" Empty Linked List";
        return;
    }

    else
    {
        while(node != NULL)
        {
            cout<<node->info<<" ";
            node = node->next;
        }
    }
}

void reverseDoublyLinkedList(Node* node)
{
    Node* current = node;
    Node* nextnode = NULL;
    Node *temp = NULL;

    while(current != NULL)
    {
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        temp = current;
        current = nextnode;
    }

    node = temp;

    forwardTraversalLinkedList(node);
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

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    node1->prev = NULL;
    node2->prev = node1;
    node3->prev = node2;
    node4->prev = node3;
    node5->prev = node4;

    Node* START = node1;

    cout<<"\n Forward Traversal is : ";
    forwardTraversalLinkedList(START);

    cout<<"\n Backward Traversal is : ";
    backwardTraversalLinkedList(START);

    cout<<"\n Reverse of Linked List is : ";
    reverseDoublyLinkedList(START);

    //reverseLinkedList(START);
    return 0;
}

