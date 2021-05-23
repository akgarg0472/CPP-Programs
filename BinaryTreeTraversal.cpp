/*Creation and traversal of Binary tree*/

#include<iostream>
using namespace std;

class Node
{
    public:
    int info;
    Node* right,*left;
    Node(int data)
    {
        info=data;
        left=NULL;
        right=NULL;
    }
};

class BT
{
    public:
    Node* create()
    {
        int data;

        cin>>data;

        if(data==-1)
            return NULL;

        Node* newnode = new Node(data);

        cout<<" Enter left child data of "<<data<<" : ";
        newnode->left = create();
        cout<<" Enter right child of "<<data<<" : ";
        newnode->right = create();

        return newnode;
    }

    void preorderTraversal(Node *root)
    {
        if(root==NULL)
            return;
        else
        {
            if(root)
            {
                cout<<root->info<<" ";
                preorderTraversal(root->left);
                preorderTraversal(root->right);
            }
        }
    }

    void inorderTraversal(Node *root)
    {
        if(root==NULL)
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

    void postorderTraversal(Node *root)
    {
        if(root==NULL)
            return;
        else
        {
            if(root)
            {
                postorderTraversal(root->left);
                postorderTraversal(root->right);
                cout<<root->info<<" ";
            }
        }
    }

    void levelorderTraversal(Node *root)
    {
        if(!root)
            return;
        else
        {
            if(root)
            {
                cout<<root->info<<" ";
            }
        }
    }
};

int main()
{
    Node *root=NULL;
    BT b;   //object of BT class

    cout<<"\n\t\t\t\t\t**********************************";
    cout<<"\n\t\t\t\t\tBinary Tree Creation and Traversal\n";
    cout<<"\t\t\t\t\t**********************************\n";

    cout<<"\n Enter root node data : ";
    root = b.create();

    cout<<"\n Preorder Traversal is : ";
    b.preorderTraversal(root);

    cout<<"\n Inorder Traversal is : ";
    b.inorderTraversal(root);

    cout<<"\n Postorder Traversal is : ";
    b.postorderTraversal(root);

    cout<<"\n Levelorder Traversal is : ";
    b.levelorderTraversal(root);
    cout<<endl;

    return 0;
}
