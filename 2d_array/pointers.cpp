#include<iostream>
using namespace std;
int main()
{
    // int *a=0;
    // // cout<<&a<<endl;
    // int num=5;
    // a=&num;
    // cout<<num<<endl;
    // // cout<<*num<<endl; No such statement exists
    // cout<<&num<<endl;
    // int *p=&num;

    // cout<<a<<endl;
    // cout<<*a<<endl;
    // cout<<&a<<endl;
    // *p=*p+1;
    // // p=p+1;
    // cout<<*p<<endl;
    // cout<<&p<<endl;
    // cout<<p<<endl;
    // double d=1.2;
    // double *pr=&d;
    // cout<<sizeof(d)<<endl;
    // cout<<sizeof(pr)<<endl;
    // cout<<sizeof(*pr)<<endl;
    // cout<<*a<<endl;
    // int *p=&num;
    // // cout<<*p;
    // // cout<<sizeof(num)<<endl;
    // cout<<p<<endl;
    // p=p+1;
    // cout<<p<<endl;
    // double d=1.2;
    // double *t=&d;
    // cout<<*t;
    // int num=9;
    // int *p=&num;
    // int *ptr=p;
    // cout<<*ptr;

    char ch[5]="abcd";
    cout<<ch<<endl;

    char *c=&ch[1];
    cout<<c<<endl;

    char temp='c';
    char *a=&temp;
    cout<<a;

    char *str="avi";
    cout<<str;
}