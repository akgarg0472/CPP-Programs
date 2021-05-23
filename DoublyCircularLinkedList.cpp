/*Program to implement Doubly Circular Linked List*/

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

        while(ptr->next != node)
        {
            ptr = ptr->next;
        }

        Node*temp = ptr;

        do
        {
            cout<<ptr->info<<" ";
            ptr = ptr->prev;
        }while(ptr != temp);
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
        Node* ptr=node;

        do
        {
            cout<<ptr->info<<" ";
            ptr = ptr->next;
        }while(ptr != node);
    }
}

void reverseDoublyLinkedList(Node* node)
{
    Node* current = node;
    Node* nextnode = NULL;
    Node *temp = NULL;

    do
    {
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        temp = current;
        current = nextnode;
    }while(current != node);

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
    Node* node6 = new Node(60);
    Node* node7 = new Node(70);
    Node* node8 = new Node(80);

    Node* START = node1;    //node to store the address of first node

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = START;

    node1->prev = node8;
    node2->prev = node1;
    node3->prev = node2;
    node4->prev = node3;
    node5->prev = node4;
    node6->prev = node5;
    node7->prev = node6;
    node8->prev = node7;

    cout<<"\n Forward Traversal is : ";
    forwardTraversalLinkedList(START);

    cout<<"\n Backward Traversal is : ";
    backwardTraversalLinkedList(START);

    cout<<"\n Reverse of Linked List is : ";
    reverseDoublyLinkedList(START);

    return 0;
}

