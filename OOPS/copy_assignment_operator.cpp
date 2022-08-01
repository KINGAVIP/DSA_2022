#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
};
int main()
{
    Hero h;
    h.health=10;
    cout<<h.health<<endl;
//copy assignment operator
    Hero n=h;
    cout<<n.health<<endl;

    h.health+=10;
    cout<<h.health<<endl;

    cout<<n.health;
}