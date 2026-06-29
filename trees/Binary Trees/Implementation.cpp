#include <iostream>
#include <queue>
using namespace std;
//Method 1
class Node 
{
    public:
    int data;
    Node *left,*right;
    Node (int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int main ()
{
    cout<<"Please Enter the value of root"<<"\n";
    int x; cin>>x; 
    int first,second;
    Node *root = new Node(x);
    queue <Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        // Left Child 
        cout<<"Please Enter the value of left child of "<<temp->data<<endl;
        cin>>first;
        if ( first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }
        cout<<"Please Enter the value of right child "<<temp->data<<endl;
        cin>>second;
        if ( second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }

    }
}
