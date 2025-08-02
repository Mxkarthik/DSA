#include <iostream>
using namespace std;

class Node {
    public:
    int val;
    Node *end;
    Node (int data)
    {
        val = data;
        end = NULL;
    }
};
int main()
{
    Node *n = new Node(1);
    cout<<"n->val : "<<n->val<<endl<<"n->end : "<<n->end;
    delete n;
    return 0;
}