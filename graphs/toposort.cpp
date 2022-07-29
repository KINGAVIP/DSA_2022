#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
}
void printgraph(vector<int>adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<"Adjacency list of :"<<i<<" is:";
        for(auto x:adj[i])
        {
            cout<<"->"<<x;
        }
        cout<<endl;
    }
}
void display(vector<int>v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i];
}
void dfs(vector<int>adj[],int v,int start,vector<int>&vis,stack<int>&s)
{
    vis[start]=1;
    for(auto x:adj[start])
    {
        if(vis[x]==0)
            dfs(adj,v,x,vis,s);
    }
    s.push(start);
}
vector<int>toposort(vector<int>adj[],int v)
{
    vector<int>ans;
    vector<int>vis(v,0);
    int start=0;
    stack<int>s;
    for(int i=0;i<v;i++)
    {
        if(vis[i]==0)
            dfs(adj,v,i,vis,s);
    }
    while(!s.empty())
    {
        int temp=s.top();
        ans.push_back(temp);
        s.pop();
    }
    return ans;
}
int main()
{
    int v=6;
    vector<int>adj[v];
    addedge(adj,5,0);
    addedge(adj,5,2);
    addedge(adj,2,3);
    addedge(adj,3,1);
    addedge(adj,4,1);
    printgraph(adj,v);
    addedge(adj,4,0);
    vector<int>ans=toposort(adj,v);
    display(ans);
}