#include<iostream>
using namespace std;
void insertion(int *arr,int n)
{
    if(n==0 || n==1)
    {
        return;
    }

    insertion(arr,n-1);

    int last=arr[n-1];
    int j=n-2;
    while(j>=0 && arr[j]>last)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;

    // for(int i=1;i<n;i++)
    // {
    //     int temp=arr[i];
    //     int j=i-1;
    //     while(j>=0 && arr[j]>temp)
    //     {
    //         arr[j+1]=arr[j];
    //         j--;
    //     }
    //     arr[j+1]=temp;
    // }
}
int main()
{
    int arr[5]={0,8,1,9,4};
    insertion(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}