#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int s,int e)
{
    int x=rand()%(e-s+1)+s;
    swap(arr[s],arr[x]);
    int pivot=arr[s];
    int min_cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
            min_cnt++;
    }
    int pivot_index=s+min_cnt;
    swap(arr[pivot_index],arr[s]);
    int i=s,j=e;
    while(i<pivot_index && j>pivot_index)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
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
void quick(vector<int>&arr,int s,int e)
{

    if(s>=e)
    {
        return;
    }
        int p=partition(arr,s,e);
        quick(arr,s,p-1);
        quick(arr,p+1,e);
    

}

int main()
{
    vector<int>arr={1,2,5,3,2};
    quick(arr,0,arr.size()-1);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}