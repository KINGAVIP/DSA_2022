
#include<iostream>
using namespace std;

//without recursion

// int gcd(int a,int b)
// {
//     if(a==0)
//         return b;
//     if(b==0)
//         return a;
//     while(a!=b)
//     {
//         if(a>b)
//             a=a-b;
//         else
//             b=b-a;
//     }
//     return a;
// }

//With recursion

int gcd(int a,int b)
{
    if(b!=0)
        return gcd(b,a%b);
    else
        return a;
}
int main()
{
    int a=0,b=3;
    int gc=gcd(a,b);
    int lc=(a*b)/gc;
    cout<<"gcd is:"<<gc<<endl;
    cout<<"lcm is:"<<lc;
}