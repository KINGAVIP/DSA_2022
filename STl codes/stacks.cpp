#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(0);
    s.push(8);
    cout<<s.top();
    s.pop();
    cout<<s.top();
}