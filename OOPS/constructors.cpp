#include<iostream>
using namespace std;
class Hero
{
    public:
    int health;
    Hero(int health)
    {
        // health=health;
        //The value of health passed will be passed int itself only 

        //so have to use this keyword
        //this->is a pointer that stores address of current object

//method of using this(same as dynamic)
        this->health=health;
        // (*this).health=health;
    }
}
;
int main()
{
    Hero h(2);
    cout<<h.health;
    //always whenever an object is created , constructor is called
    //default constructor is called having following properties
    //->same name as class ->no return type ->no ip

    //once another constructor is created default constructor gets delted and can never be used
}