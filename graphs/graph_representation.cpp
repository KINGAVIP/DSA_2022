#include<vector>
#include<iostream>
using namespace std;
void addedge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    // adj[v].push_back(u);
}
void printgraph(vector<int>adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<"adjacency list of vertex :"<<i<<"is:";
        for(auto x:adj[i])
        {
            cout<<"->"<<x;
        }
        cout<<endl;
    }
}
int main()
{
    int v=4;
    vector<int>adj[v];
    addedge(adj,1,0);
    addedge(adj,3,0);
    addedge(adj,2,0);
    addedge(adj,1,2);
    addedge(adj,1,3);
    addedge(adj,2,3);
    // addedge(adj,1,0);
    printgraph(adj,v);

    
}