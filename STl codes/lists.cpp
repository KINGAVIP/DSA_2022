#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;
    l={2,3,4,1,9};
    l.push_back(8);
    l.push_front(1);
    l.pop_back();
    l.pop_front();
    for(auto i:l)
        cout<<i<<" ";
    list<int>:: iterator it=l.begin();
    for(it;it!=l.end();it++)
    // while(it!=l.end())
        {cout<<*it;
        // it++;
        }
}