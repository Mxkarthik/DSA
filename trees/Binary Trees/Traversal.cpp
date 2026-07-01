#include <iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node *left;
    Node *right;

    Node (int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node *BinaryTree()
{
    int x;
    cin>>x;
    if ( x == -1 )
    {
        return NULL;
    }
    Node *temp = new Node(x);
    
    cout<<"enter the left of"<<x;
    temp->left = BinaryTree();
    cout<<"enter the right of"<<x;
    temp->right = BinaryTree();
    return temp;
}

void PreOrder(Node *root)
{
    if ( root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    // left 
    PreOrder(root->left);
    // right 
    PreOrder(root->right);

}

void InOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PostOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main ()
{
    cout<<"Enter the root node";
    Node *root = BinaryTree();

    // Pre Order traversal 
    cout<<"PreOrder :"<<"\n";
    PreOrder(root);
    // In Order traversal 
    cout<<"InOrder :"<<"\n";
    InOrder(root);
    cout<<"PostOrder :"<<"\n";
    // Post Order Traversal
    PostOrder(root);

    return 0;
}