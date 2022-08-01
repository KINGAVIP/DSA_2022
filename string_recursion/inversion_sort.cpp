#include <bits/stdc++.h> 
using namespace std;
long long merge(long long *arr,int s,int e,int mid)
{
    long long inv=0;
    int n1=mid-s+1,n2=e-mid;
    int arr1[n1],arr2[n2];
    int k=s;
    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr[k++];
    }
    for(int j=0;j<n2;j++)
    {
        arr2[j]=arr[k++];
    }
    int r=s,i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[r++]=arr1[i++];
        }
        else
        {
            arr[r++]=arr2[j++];
            inv+=n1-i;
        }
    }
    while(i<n1)
    {
        arr[r++]=arr1[i++];
    }
    while(j<n2)
    {
        arr[r++]=arr2[j++];
    }
    return inv;
}
long long mergeSort(long long*arr,int s,int e)
{
    long long inv=0;
    if(s<e)
    {
        int mid=s+(e-s)/2;
        inv+=mergeSort(arr,s,mid);
        inv+=mergeSort(arr,mid+1,e);
        inv+=merge(arr,s,e,mid);
    }
    return inv;
        
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long ans=mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return ans;
}
int main()
{
    long long arr[5]={2,3,1,8,9};
    long long ans=getInversions(arr,5);
    cout<<endl<<ans;

}