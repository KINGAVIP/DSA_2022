#include<iostream>
using namespace std;

//412=four one two
void saydigit(int n,string arr[])
{
    if(n==0)
    {
        return ;
    }
    int digit=n%10;
    n/=10;
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
}

int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<endl;
    saydigit(n,arr);
}