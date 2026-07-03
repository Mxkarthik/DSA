// The approach for the level order traversal 
/*
1. Save the root element in the queue
2. create a while loop 
3. create a size variable and store the size of the queue 
4.now create a for loop and store the front of the queue in temp 
5. pop the element from the queue 
6. check for the right element 
7. check for the left element 
8. if there is an element push in the queueu 
9. push the element in the temp to the level
10 exit the for loop and now push the level in the answer
*/
#include <iostream>
#include <vector>
#include <queue>
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

vector <vector<int>>LevelOrder (Node *root)
{
    vector<vector<int>>  answer;
    queue <Node*> q;
    q.push(root);
    while (!q.empty())
    {
        vector <int> level;
        int size = q.size();
        for (int i = 0 ; i < size ;  i++)
        {
            Node *temp = q.front();
            q.pop();
            if ( temp->left != NULL)
            {
                q.push(temp->left);
            }
            if(temp->right != NULL)
            {
                q.push(temp->right);
            }

            level.push_back(temp->data);
        }
        answer.push_back(level);
    }
    return answer;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> ans = LevelOrder(root);

    for (auto level : ans)
    {
        for (int x : level)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}