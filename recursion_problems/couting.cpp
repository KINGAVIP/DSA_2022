#include<iostream>
using namespace std;
//tail recursion-recurence relation end mai
// void print(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     cout<<n;
//     print(n-1);

// }
//head recursion
void print(int n)
{
    if(n==0)
    {
        return;
    }
    print(n-1);
    cout<<n;


}
int main()
{
    int n;
    cin>>n;
    print(n);
}