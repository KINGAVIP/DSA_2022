#include<iostream>
using namespace std;
int partition(int *arr,int s,int e)
{
    
    int p=arr[s];
    int min_cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=p)
        {
            min_cnt++;
        }
    }
    int pivot_index=s+min_cnt;
    swap(arr[pivot_index],arr[s]);
    int i=s,j=e;
    while(i<pivot_index && j>pivot_index)
    {
        while(arr[i]<=p)
        {   
            i++;
        }
        while(arr[j]>=p)
        {
            j--;
        }
        if(i<pivot_index && j>pivot_index)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivot_index;
}
void quicksort(int *arr,int s,int e)
{
    if(s>=e)
        return;
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main()
{
    int arr[5]={0,1,1,4,3};
    int n=5;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}