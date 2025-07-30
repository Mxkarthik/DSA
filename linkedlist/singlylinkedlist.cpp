#include <iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node * end;

    Node (int x)
    {
        val = x;
        end = NULL;
    }
};

int main()
{
    Node * p = new Node(1);
    cout<<p->val<<" "<<p->end;
    return 0;
}