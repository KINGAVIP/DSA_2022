#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    Hero()
    {
        this->health=0;
        this->level='A';
    }
    Hero(int h)
    {
        health=h;
        this->level='B';
    }
    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
    }
    void print()
    {
        cout<<"Health"<<this->health<<endl;
        cout<<"Level"<<this->level<<endl;
    }
};
int main()
{
    Hero a;
    a.print();

    Hero b(10);
    b.print();

    Hero c(20,'C');
    c.print();
}