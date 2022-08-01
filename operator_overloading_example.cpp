#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    A operator+(A &obj)
    {
        A ans;
        ans.a=this->a+obj.a;
        ans.b=this->b+obj.b;
        return ans;
    }
    void print()
    {
        cout<<this->a<<"+i"<<this->b<<endl;
    }
};
int main()
{
    A obj1,obj2;
    obj1.a=5;
    obj1.b=4;
    obj2.a=10;
    obj2.b=20;
    obj1.print();
    obj2.print();
    A obj3=obj1+obj2;
    obj3.print();   
}