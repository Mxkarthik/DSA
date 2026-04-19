#include<iostream>
#include<vector>
using namespace std;


// Adjaceny matrix 
// undirected unweighted graph
int main ()
{
    int vertex , edges;
    cout<<"Please enter the vertex and edges of the graph : ";
    cin>>vertex;
    cin>>edges;
    vector <vector <bool> >AdjMat(vertex , vector<bool>(vertex,0));

    int u , v;
    for (int i = 0; i < edges ; i++)
    {
        cin>>u>>v;
        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1;
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