#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    Hero()      //as default is deleted automaticcally whwnever a constructor is created
    {

    }
    Hero(Hero& b) //ref of object needs to be passed else copy constructor will be called infinitely
    {
        this->health=b.health+10;
        this->level=b.level;
    }
};
int main()
{
    Hero h;
    h.health=20;
    h.level='V';
    
    //copy constructor 
    // Hero b(h);
    //above stat means b.health=h.health and b.level=h.health
    // cout<<b.health;
    // cout<<b.level;


    //method 2 creating a constructor
    Hero b(h);
    cout<<b.health;
    cout<<b.level;
}