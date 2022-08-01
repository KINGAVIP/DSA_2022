#include<iostream>
using namespace std;
bool linear(int *arr,int n,int x)
{
    if(n==0)
    {
        return false;
    }
    else if(arr[0]==x)
        return true;
    else
        return linear(arr+1,n-1,x);
    
}
int main()
{
    int arr[5]={1,3,4,15,3};
    cout<<linear(arr,5,2);

}