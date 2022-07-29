#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,6>arr={1,2,3,4,5,8};
    for(int i:arr)
        cout<<i<<" ";
    cout<<endl;
    cout<<arr.front();
    cout<<arr.back();
    cout<<arr.at(2);
    cout<<arr.size();
    cout<<arr.empty();

    // cout<<arr.begin();
    // cout<<arr.end();
    auto it=arr.begin();
    cout<<endl;
    for(it;it!=arr.end();++it)
        cout<<*it<<"hi";
}