#include<iostream>
using namespace std;
int main()
{
    //row wise sum
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int row=0;row<3;row++)
    {
        int sum=0;  
        for(int col=0;col<4;col++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<endl;
    }
    cout<<"column wise sum:"<<endl;
    //col wise sum
    int arr2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int col=0;col<4;col++)
    {
        int sum=0;  
        for(int row=0;row<3;row++)
        {
            sum+=arr2[row][col];
        }
        cout<<sum<<endl;
    }
}