/*Implementation of Circular Single Linked List*/

#include<iostream>

using namespace std;

class Node
{
    public:
    int info;
    Node* link;
    Node(int data)
    {
        info = data;
    }
};

void displayCircularLinkedList(Node* node)
{
    if(node==NULL)
    {
        cout<<" Empty Linked List";
        return;
    }

    else
    {
        Node* ptr = node;

        do
        {
            cout<<ptr->info<<" ";
            ptr = ptr->link;
        }while(ptr != node);
    }
}

void reverseCircularLinkedList(Node* node)
{
    Node* current = node;
    Node* prev = NULL;
    Node* next  = NULL;

    do
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }while(current!=node);

    node->link = prev;
    node = prev;

    displayCircularLinkedList(node);
}

int main()
{
    cout<<"\t\t\t\t\t***********************\n";
    cout<<"\t\t\t\t\tCircular Linked List DS\n";
    cout<<"\t\t\t\t\t***********************\n";

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);

    Node* START = node1;    //pointer to hold the first node

    node1->link = node2;
    node2->link = node3;
    node3->link = node4;
    node4->link = node5;
    node5->link = START;

    cout<<" Link list Traversal is : ";
    displayCircularLinkedList(START);

    cout<<"\n Reverse of Linked List is : ";
    reverseCircularLinkedList(START);
}
