#include<iostream>
using namespace std;
int main()
{
    string arr[3]={"amar","raj","aman"};
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }
}