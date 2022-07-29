#include<iostream>
using namespace std;
int main()
{
    //row wise sum
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int maxi=INT_MIN,index=0;
    for(int row=0;row<3;row++)
    {
        int sum=0;  
        for(int col=0;col<4;col++)
        {
            sum+=arr[row][col];
            if(sum>maxi)
            {
                maxi=sum;
                index=row+1;
            }
        }
        // cout<<sum<<endl;
    }
    cout<<"larget row wise sum is:"<<maxi<<"of row:"<<index;
}