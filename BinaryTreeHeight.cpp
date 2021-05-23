/*Program to find out the height of a binary tree*/
#include<iostream>
using namespace std;

class Node
{
    public:
    int info;
    Node* left,*right;
    Node(int data)
    {
        info = data;
        left=NULL;
        right=NULL;
    }
};

//Height of a tree is the number of edges in the longest path from root to a leaf node(node without any child node)
int heightofBT(Node* root)    //returns the count of the height or max depth of tree
{
    if(!root)
        return 0;

    int leftheight = heightofBT(root->left);
    int rightheight = heightofBT(root->right);

    return max(leftheight,rightheight)+1;
}

int main()
{
    cout<<"\n\t\t\t\t\t\t********************\n";
    cout<<"\t\t\t\t\t\t Binary Tree Height\n";
    cout<<"\t\t\t\t\t\t********************\n";

    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);
    Node *node6 = new Node(60);
    Node *node7 = new Node(70);
    Node *node8 = new Node(80);
    Node *node9 = new Node(90);
    Node *node10 = new Node(100);

    Node *root = node1; //root node of the tree

    node1->left = node2;
    node1->right = node3;

    node2->left = node4;
    node2->right = node5;

    node4->left = node8;
    node4->right = node9;

    node5->left = node10;

    node3->left = node6;
    node3->right = node7;

    cout<<" Height of tree is : "<<heightofBT(root);
    return 0;
}
