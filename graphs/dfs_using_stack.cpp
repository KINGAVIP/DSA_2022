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
// void finder(vector<int>adj[],int v,int start,vector<int>&ans,bool vis[])
// {
//     ans.push_back(start);
//     vis[start]=true;
//     for(auto x:adj[start])
//     {
//         if(!vis[x])
//             finder(adj,v,x,ans,vis);
//     }
// }
vector<int> dfs(vector<int>adj[],int v)
{       
    vector<int>ans;
    int start=0;
    bool vis[v];
    for(int i=0;i<v;i++)
    {   
        vis[i]=false;
    }
    stack<int>st;
    st.push(start);
    // ans.push_back(start);
    // vis[start]=true;
    while(!st.empty())
    {
        int temp=st.top();
        cout<<temp;
        st.pop();
        if(!vis[temp])
        {
            cout<<"j";
            ans.push_back(temp);
            vis[temp]=true;
        }
        ans.push_back(temp);
        for(int i=0;i<adj[temp].size();i++)
        {

            if(!vis[adj[temp][i]])
            {
                st.push(adj[temp][i]);
                cout<<st.top();
                // ans.push_back(st.top());
                // vis[adj[temp][i]]=true;
            }
            
                        
        }
        // for(auto i=adj[temp].begin();i!=adj[temp].end();++i)
        // {
        //     if(!vis[*i])
        //         st.push(*i);
        // }
        return ans;
    }
    return ans;
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
    int v=5;
    vector<int>adj[v];
    addedge(adj,1,0);
    addedge(adj,0,2);
    addedge(adj,2,1);
    addedge(adj,0,3);
    addedge(adj,1,3);

    // addedge(adj,1,2);
    // addedge(adj,1,5);
    // addedge(adj,2,6);
    // addedge(adj,3,6);
    // addedge(adj,4,5);
    printgraph(adj,v);
    // vector<int>bf=bfs(adj,v);
    vector<int>df=dfs(adj,v);
    display(df,v);
    
}