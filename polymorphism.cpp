#include<iostream>
using namespace std;
// //compile time 

// // operator overloading

// //overloading + operator
// class A{
//     public:
//     int a,b;
//     int operator+(A &obj)
//     {
 
//         return this->a-obj.a;
//     }
//     void operator*(A &obj)
//     {
//         cout<<"hello i m not multiplying"<<endl;
//     }
//     void operator() ()
//     {
//         cout<<"I am a bracket with value"<<this->a;
//     }
//     void operator/ (A& obj)
//     {

//     }
//     void operator. (A&obj)
//     {
        
//     }

// };

// int main()
// {
//     A obj1;
//     A obj2;
//     obj1.a=5;
//     obj2.a=3;
//     cout<<obj2+obj1;    
//     obj1*obj2;
//     int a=5,b=3;
//     cout<<a+b;
//     obj1();
// }


//run time polymorphism

//method overriding

class A{
    public:
    void hello()
    {
        cout<<"This is A";
    }
};
class B: public A{
    public:
    void hello()
    {
        cout<<"This is B";
    }
};

int main()
{
    B b;
    b.hello();
}