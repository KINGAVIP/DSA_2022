#include<iostream>
using namespace std;
class Hero{
    //private
    // int health;
    // char level;
    // double power;
    // int hel;
    // public:
    // //accessing private members
    // //setters and getters
    // int gethealth()
    // {
    //     return health;
    // }
    // void sethealth(int h)
    // {
    //     health=h;
    // }

    public:
    int health;
};
int main()
{
    Hero h;//static allocation
    h.health=20;
    // cout<<h.health;

    //dynamic memory allocation
    Hero*b=new Hero;
    b->health=50;
    // cout<<(*b).health;
    // cout<<endl;
    // delete b;
    // delete h;
    cout<<(*b).health<<endl;

    //to access values in dynamic memory we can use -> instead of(*b).
    
    cout<<b->health;

    // cout<<sizeof(*b);
    // cout<<h;
    //size of empty class object=1 so to show its existence
    // cout<<sizeof(h);
    // cout<<h.health;
    // h.sethealth(20);
    // cout<<h.gethealth();
    // cout<<sizeof(h);
}