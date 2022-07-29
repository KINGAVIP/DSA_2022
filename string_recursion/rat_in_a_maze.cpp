#include<bits/stdc++.h>
bool ispath(vector<vector<int>>arr,string path,int row,int col,int n,vector<vector<int>>&visited)
{
    if((row>=0 && row<=n-1) && (col>=0 && col<=n-1) && visited[row][col]==0
      &&  arr[row][col]==1)
       return true;
    return false;
}
void solve(vector < vector < int >>arr,string path,vector<string>&ans,int row,int col,int n,vector<vector<int>>&visited)
{
    //reaching destination is the base case
    if(row==n-1 && col==n-1)
    {
        ans.push_back(path);
        return;
    }
    visited[row][col]=1;
    int newx,newy;
    //Down
    newx=row+1;
    newy=col;
    if(ispath(arr,path,newx,newy,n,visited))
    {
        path.push_back('D');
        solve(arr,path,ans,newx,newy,n,visited);
        path.pop_back();
    }
    //up
    newx=row-1;
    newy=col;
    if(ispath(arr,path,newx,newy,n,visited))
    {
        path.push_back('U');
        solve(arr,path,ans,newx,newy,n,visited);
        path.pop_back();
    }
    
    //left
    newx=row;
    newy=col-1;
    if(ispath(arr,path,newx,newy,n,visited))
    {
        path.push_back('L');
        solve(arr,path,ans,newx,newy,n,visited);
        path.pop_back();
    }
    
    //right
    newx=row;
    newy=col+1;
    if(ispath(arr,path,newx,newy,n,visited))
    {
        path.push_back('R');
        solve(arr,path,ans,newx,newy,n,visited);
        path.pop_back();
    }
    visited[row][col]=0;
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    // Write your code here.
    vector<string>ans;
    if(arr[0][0]==0)
        return ans;
    string path="";
    vector<vector<int>>visited=arr;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            visited[i][j]=0;
        }
    }
    solve(arr,path,ans,0,0,n,visited);
    sort(ans.begin(),ans.end());
    return ans;
}