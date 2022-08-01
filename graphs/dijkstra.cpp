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
vector<int>shortestpath(vector<pair<int,int>>adj[],int v)
{
    int source=1;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>distto(v,INT_MAX);
    distto[source]=0;
    pq.push({0,source});
    while(!pq.empty())
    {
        int dist=pq.top().first;
        int node=pq.top().second;
        pq.pop();
        for(auto x:adj[node])
        {
            int next=x.first;
            int nextdist=x.second;
            if(distto[next]>distto[node]+nextdist)
            {
                distto[next]=distto[node]+nextdist;
                pq.push({distto[next],next});
            }
        }
    }
    return distto;
}
void display(vector<int>vec)
{
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
}
int main()
{
    int v=5;
    vector<pair<int,int>>adj[v];
    addedge(adj,1,2,2);
    addedge(adj,1,4,1);
    addedge(adj,2,3,4);
    addedge(adj,2,0,5);
    addedge(adj,4,3,3);
    addedge(adj,3,0,1);
    printgraph(adj,v);
    vector<int>dikstra=shortestpath(adj,v);
    display(dikstra);
}