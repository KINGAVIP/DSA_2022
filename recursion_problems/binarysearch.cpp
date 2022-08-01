#include<iostream>
using namespace std;
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
bool binary(int *arr,int n,int x)
{
    cout<<endl;
    print(arr,n);
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    if(n==0 || low>high)
    {
        return false;
    }

    if(arr[mid]==x)
    {
        return true;    
    }
    else if(arr[mid]>x)
    {
        return binary(arr,n-mid-1,x);
    }
    else
    {
        return binary(arr+mid+1,n-mid-1,x);
    }
    
}
int main()
{
    int arr[5]={1,3,4,7,8};
    cout<<binary(arr,5,3);
}