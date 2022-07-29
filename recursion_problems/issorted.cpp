#include<iostream>
using namespace std;
bool check(int *arr,int n)
{

    if(n==0)
    {
        return true;
    }
    else if(arr[1]>=arr[0])
    {
        return check(arr+1,n-1);
    }
    else{
        return false;
    }
}
int main()
{
    int arr[5]={2,1,5,6,9};
    cout<<check(arr,5);
}