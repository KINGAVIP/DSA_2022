#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4};
    auto it=vec.begin();
    vec.insert(it+1,20);
    for(auto i:vec)
        cout<<i;
    cout<<endl;
    cout<<vec.capacity();
    cout<<vec.size();
    vec.resize(5);
    vec.push_back(5);
    cout<<vec.capacity();
    cout<<vec.size();
    vector<string>vec2={"a","ab","abc","abcd"};
    vec2.erase(vec2.begin()+1,vec2.begin()+3);
    for(auto i:vec2)
        cout<<i<<" ";
    cout<<endl;
    // vec2.pop_back();
    
    for(auto it=vec2.begin();it!=vec2.end();it++)
        cout<<*it<<" ";

    
}