#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    int m=3;
    vector<bool>vis(n*m,false);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(vis[m*i+j]==false)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
                vis[m*i+j]=true;
                vis[m*j+i]=true;
            }
        }
    }

    for(int k=0;k<n;k++)
    {
        int i=k,j=m-1;
        while(i<n && j>0)
        {
            int temp=matrix[i][j];
            matrix[i][j]=matrix[i][m-j-1];
            matrix[i][m-j-1]=temp;
            i++;
            j--;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }    

}