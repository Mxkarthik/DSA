#include <iostream>
#include <vector>
using namespace std;
// Implimentation of Breath First Search and Depth First Search is in order
int main ()
{
    int vertex,edges;
    cout<<"Please enter the value of vertex and edges\n";
    cin>>vertex>>edges;
    vector<vector<bool>>AdjMat(vertex,vector<bool>(vertex,0));
    int u,v;
    for (int i = 0 ; i < edges ; i++){
        cin>>u>>v;
       AdjMat[u] [v] = 1;
    }
    
    for (int i = 0 ; i < vertex ; i++)
    {
        for (int j = 0 ; j < vertex ; j++)
        {
            cout<<AdjMat[i][j]<<" ";
        }
            cout<<endl;
    }
    return 0;
}
