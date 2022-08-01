#include<bits/stdc++.h>
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
vector<int>bfs(vector<int>adj[],int v)
{
    int i;
    queue<int>q;
    bool vis[v];
    for(int i=0;i<v;i++)
    {
        vis[i]=false;
    }
    q.push(0);
    vis[0]=true;
    vector<int>vec;
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        vec.push_back(temp);
        for(int i=0;i<adj[temp].size();i++)
        {
            if(!vis[adj[temp][i]])
            {
                q.push(adj[temp][i]);
                vis[adj[temp][i]]=true;
            }
        }
    }
    return vec;
}
void display(vector<int>vec,int v)
{
    cout<<endl<<"the output is:"<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"->";
    }
}

int main()
{
    int v=7;
    vector<int>adj[v];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,0,3);
    addedge(adj,0,4);
    addedge(adj,1,2);
    addedge(adj,1,5);
    addedge(adj,2,6);
    addedge(adj,3,6);
    addedge(adj,4,5);
    printgraph(adj,v);
    vector<int>bf=bfs(adj,v);
    display(bf,v);
    
}