#include<iostream>
using namespace std;
void solve(string &s,int i,int j)
{
    if(i>j)
        return ;
    swap(s[i],s[j]);
    i++;
    j--;
    return solve(s,i,j);

}

int main()
{
    string s="avi";
    solve(s,0,s.size()-1);
    cout<<s;
}