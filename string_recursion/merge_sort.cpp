#include<iostream>
using namespace std;
void merge(int *arr,int l,int h,int mid)
{   
    int n1=mid-l+1;
    int n2=h-mid,k=l;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr[k++];
    }
    // k=mid+1;
    for(int j=0;j<n2;j++)
    {
        arr2[j]=arr[k++];
    }
    int i=0,j=0,r=l;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[r++]=arr1[i++];
        }
        {
        else
            arr[r++]=arr2[j++];
        }
    }
    while(i<n1)
        arr[r++]=arr1[i++];
    while(j<n2)
        arr[r++]=arr2[j++];
}
void mergeSort(int *arr,int low,int high)
{
    if(low>=high)
        return;
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high,mid);
}
int main()
{
    int arr[5]={8,1,2,8,3};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}