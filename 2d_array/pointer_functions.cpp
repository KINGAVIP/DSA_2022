// #include<iostream>
// using namespace std;
// void update(int *p)
// {
//     *p=*p+1;
// }
// int main()
// {
//     int p=2;
//     int *ptr=&p;
//     cout<<"before:"<<p<<endl;
//     update(ptr);
//     cout<<"after"<<p;
// }


#include<iostream>
using namespace std;
void calculate(int *area,int *peri,int r)
{
    *area=r*r;
    *peri=2*3.14*r;
}
int main()
{
    int r=5;
    int area=0,peri=0;
    int *a=&area,*p=&peri;
    calculate(a,p,r);
    cout<<"area is:"<<a<<" perimeter is:"<<p;
}