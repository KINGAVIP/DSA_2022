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
vector<int> prim(vector<pair<int,int>>adj[],int n)
{
    vector<int>parent(n,-1);
    vector<int>mst(n,false);
    vector<int>key(n,INT_MAX);
    // for(int i=0;i<n;i++)
    // {
    //     key[i]=INT_MAX;
    //     mst[i]=false;
    //     parent[i]=-1;
    // }
    key[0]=0;
    parent[0]=-1;
    for(int count=0;count<n-1;count++)
    {
        int mini=INT_MAX,u;
        for(int i=0;i<n;i++)
        {
            if(mst[u]==false && key[i]<mini)
            {
                mini=key[i];
                u=i;
            }
        }
        mst[u]=true;
        for(auto x:adj[u])
        {
            int v=x.first;
            int wt=x.second;
            if(mst[v]==false && wt<key[u])
            {
                key[u]=wt;
                parent[v]=u;
            }
        }
    }
    return key;
}
void display(vector<int>vec)
{
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
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
    vector<int>prims=prim(adj,v);
    display(prims);
    
}