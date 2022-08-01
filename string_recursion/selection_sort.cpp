#include<iostream>
using namespace std;
void select(int *arr,int n)
{
    // for(int i=0;i<n;i++)
    // {
    //     int mini=i;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[j]<arr[mini])
    //         {mini=j;
    //         }
    //     }
    //     swap(arr[i],arr[mini]);
    // }
    if(n==0 || n==1)
    {
        return;
    }
    int mini=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[mini])
        {
            mini=i;
        }
    }
    swap(arr[0],arr[mini]);
    select(arr+1,n-1);
}
int main()
{
    int arr[5]={0,8,1,9,4};
    select(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}