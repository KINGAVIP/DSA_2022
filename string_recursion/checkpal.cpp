#include<iostream>
using namespace std;
bool check(string s,int i)
{
    int j=s.size()-i-1;
    if(i>=j)
        return true;
    else if(s[i]!=s[j])
        return false;
    else
    {
        i++;
        return check(s,i);

    }
    // int i=0,j=s.size()-1;
    // string a=s;
    // while(i<j)
    // {
    //     swap(s[i],s[j]);
    //     i++;
    //     j--;
    // }
    // if(s==a)
    //     return true;
    // return false;
}
int main()
{
    string s="babbab";
    cout<<check(s,0);
}