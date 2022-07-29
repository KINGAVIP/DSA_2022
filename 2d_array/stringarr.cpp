#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    int i=2;
    cout<<*(arr+i)<<endl;
    cout<<*(i+arr)<<endl;
    cout<<i[arr]<<endl;
    cout<<arr[i]<<endl;

    int *ptr=&arr[0];
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ptr)<<endl;

    cout<<ptr<<endl;
    // arr=arr+2;
    ptr=ptr+1;

}