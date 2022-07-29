#include<iostream>
using namespace std;
int findsum(int *arr,int n)
{
    if(n==0)
        return 0;
    return arr[0]+findsum(arr+1,n-1);
    
}
int main()
{
    int arr[5]={1,2,4,15,3};
    cout<<findsum(arr,5);

}