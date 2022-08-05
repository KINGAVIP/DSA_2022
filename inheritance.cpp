//single inheritance
#include<iostream>
using namespace std;

// single inheritance
// class A{
//     public:
//     int age;
//     A()
//     {
//         cout<<"Hi this is A"<<endl;
//         age=10;
//     }
// };
// class B:public A
// {
//     public:
//     int age;
//     B()
//     {
//         cout<<"Hi this is B"<<endl;
//         age=5;
//     }
// };
// // int main()
// // {
// //     B b;
// //     cout<<b.age;
// // }

// //multi-level

// class C:public B
// {

// };
// int main()
// {
//     C c;
//     cout<<c.age;
// }


// multiple
// class A {
//     public:
//     // int age;
//     A()
//     {   
//         cout<<"I am A";
//         // this->age=10;
//     }
//     void wlcm()
//     {
//         cout<<"Welcome"<<endl;
//     }
// };
// class B{
//     public :
//     // int age;
//     B()
//     {
//         cout<<"I am B";
//     }
//     void goodbye()
//     {
//         cout<<"Goodbye"<<endl;
//     }
// };
// class C:public B,public A{
//     public:
//     C()
//         {
//             cout<<"I am c"<<endl;
//         }
// };
// int main()
// {
//     C c;
//     // c.wlcm();
// }

//ambiguity is there if we have same named data memeber or member function

//constructor is always public and is printed in order Base class 1- Basse class 2 -child class
//i.e in our case B->A->C

//to solve this ambiguity we have SCOPE RESOLUTION OPERATOR
//which acts like obj.A::func() or obj.B::func


//solving the ambiguity


class A {
    public:
    int age;
    A()
    {   
        cout<<"I am A";
        this->age=10;
    }
    void wlcm()
    {
        cout<<"Welcome"<<endl;
    }
};
class B{
    public :
    int age;
    B()
    {
        cout<<"I am B";
        this->age=5;
    }
    void goodbye()
    {
        cout<<"Goodbye"<<endl;
    }
};
class C:public B,public A{
    public:
    int age;
    C()
        {
            age=15;
            cout<<"I am c"<<endl;
        }
};
int main()
{
    C c;
    //cout<<c.age;//ambiguity
    // cout<<c.A::age; //age of class A can be used
    // cout<<c.B::age; //age of class A can be used
}
