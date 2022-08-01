#include<bits/stdc++.h>
using namespace std;
void addedge(vector<pair<int,int>>adj[],int u,int v,int wt)
{
    adj[u].push_back({v,wt});
    adj[v].push_back({u,wt});
}
void printgraph(vector<pair<int,int>>adj[],int vertex)
{
    int v,wt;
    for(int u=0;u<vertex;u++)
    {
        cout<<"Node:"<<u<<" makes an edge with:"<<endl;
        for(auto x:adj[u])
        {
            v=x.first;
            wt=x.second;
            cout<<"Node "<<v<<" and edge width ="<<wt<<endl;
        }
        cout<<endl;
    }
}
vector<int>bellman(vector<pair<int,int>>adj[],int v)
{
    int source=1;
    vector<int>dist(v,INT_MAX);
    dist[source]=0;
    for(int i=0;i<v-1;i++)
    {
        for(auto x:adj[i])
        {
            
        }
    }
}
int main()
{
    int v=5;
    vector<pair<int,int>>adj[v];
    addedge(adj,0,1,2);
    addedge(adj,1,2,3);
    addedge(adj,0,3,6);
    addedge(adj,1,4,5);
    addedge(adj,1,3,8);
    addedge(adj,2,4,7);
    printgraph(adj,v);
}