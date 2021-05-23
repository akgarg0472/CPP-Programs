/*Binary Search Tree Implementation*/

#include<iostream>
using namespace std;

class Node
{
    public:
    int info;
    Node* left,*right;
};

Node* newNode(int data)
{
    Node* newnode = new Node();
    newnode->info = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

class BST
{
    public:
    Node* insertElement(Node* root,int data);
    bool findElement(Node* root,int data);
    void inorderTraversal(Node* root);
};

Node* BST::insertElement(Node* root,int data)
{
    if(root==NULL)
        root = newNode(data);

    else if(data <= root->info)
        root->left = insertElement(root->left,data);

    else
        root->right = insertElement(root->right,data);

    return root;
}

bool BST::findElement(Node* root,int data)
{
    if(!root)
        return false;

    else if(root->info==data)
        return true;

    else if(data <= root->info)
        return findElement(root->left,data);

    else
        return findElement(root->right,data);
}

void BST::inorderTraversal(Node* root)
{
    if(!root)
        return;

    else
    {
        if(root)
        {
            inorderTraversal(root->left);
            cout<<root->info<<" ";
            inorderTraversal(root->right);
        }
    }
}

int main()
{
    cout<<"\n\t\t\t\t\t\t********************\n";
    cout<<"\t\t\t\t\t\t Binary Search Tree";
    cout<<"\n\t\t\t\t\t\t********************\n";

    BST b;
    Node* root = NULL;
    int Element;

    root = b.insertElement(root,25);
    root = b.insertElement(root,15);
    root = b.insertElement(root,20);
    root = b.insertElement(root,5);
    root = b.insertElement(root,10);
    root = b.insertElement(root,40);
    root = b.insertElement(root,35);

    cout<<"\n Inorder Traversal is : ";
    b.inorderTraversal(root);

    cout<<"\n\n Enter element to search in BST : ";
    cin>>Element;

    if(b.findElement(root,Element))
        cout<<" Element "<<Element<<" found";
    else
        cout<<" Element "<<Element<<" not found";

    cout<<endl;
    return 0;
}
