#include<iostream>
using namespace std;
string solve(string s,int n,int i,int j)
{
    if(n==0 || n==1)
    {
        return s;
    }
    if(i<j)
    {
        swap(s[i],s[j]);
        return solve(s,n-2,i++,j--);
    }
    return s;

}
string rev(string s)
{
    int n=s.size();
    return solve(s,n,0,n-1);
}
int main()
{
    string s="avi";
    cout<<rev(s);
}