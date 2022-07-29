#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    // int smaller_prob=fact(n-1);
    // int big_problem=n*smaller_prob;
    // return big_problem;
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}