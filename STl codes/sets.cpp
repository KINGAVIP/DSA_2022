#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(7);
    s.insert(3);
    for(auto i:s)
        cout<<i;
    cout<<endl;
    set<int>::iterator it=s.begin();
    for(it;it!=s.end();it++)
        cout<<*it;
    set<int>::iterator itr;
    itr=s.find(1);
    cout<<s.count(-1);
    s.erase(itr);
    for(auto i:s)
        cout<<i;

}