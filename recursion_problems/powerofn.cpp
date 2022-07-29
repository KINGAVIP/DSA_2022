#include<iostream>
using namespace std;
int power(int n)
{
    if(n==0)
        return 1;
    // int choti=power(n-1);
    // int badi=2*choti;
    // return badi;
    return 2*power(n-1);
}
int main()
{
    int n;
    cout<<"Enter a  number:";
    cin>>n;
    cout<<power(n);
}