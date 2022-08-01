#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
bool comp(pair<int,int>&a,pair<int,int>&b)
{
    return a.first<b.first;

}
int main()
{
    map<int,int>mp;
    mp[0]=1;
    mp[4]=9;
    mp[3]=8;
    for(auto i:mp)
    {
        cout<<i.first;
        cout<<i.second;
    }
    cout<<mp.size();
    cout<<endl;
    sort(mp.begin(),mp.end(),comp);
    for(auto i:mp)
    {
        cout<<i.first;
        cout<<i.second;
    }   
}