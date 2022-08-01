#include<iostream>
using namespace std;
void bubble(int *arr,int n)
{
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n-i;j++)
    //     {
    //         if(arr[j]<arr[i])
    //         {
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }
    if(n==0 || n==1)
    {
        return ;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]<arr[i])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    // if(arr[1]<arr[0])
    //     swap(arr[0],arr[1]);
    return bubble(arr,n-1);
}
int main()
{
    int arr[5]={2,1,5,9,0};
    bubble(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}