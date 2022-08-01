#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    static int time_to_complete;
    Hero(string name)
    {
        cout<<"Constructor called for:"<<name<<endl;
    }
    ~Hero()
    {
        cout<<"Destructor called"<<endl;
    }

};
int Hero::time_to_complete=10;
int main()
{
    Hero h("hero");
    Hero n("villain");
    Hero*b=new Hero("Dyna");
    delete b;
    cout<<Hero::time_to_complete;
}