#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//Deep copy
class Hero{
    public:
    int health;
    char level;
    char *name;
    Hero()
    {
        name=new char[100];
    }
    //We create our own copy constructor in deep copy
    Hero(Hero & b)
    {
        char *ch=new char[strlen(b.name)+1];
        strcpy(ch,b.name);
        this->name=ch;
        this->health=b.health;
        this->level=b.level;
    }
    void print()
    {
        cout<<"name:"<<this->name<<endl;
        cout<<"Health :"<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
    }
    void setname(char name[])
    {
        this->name=name;
    }
};

int main(){
    Hero h;
    h.health=10;
    h.level='A';
    char name[4]="avi";
    h.setname(name);   
    h.print();
    Hero n(h);
    n.print();

//Deep copy->diff. memory access
    h.health+=10;
    h.name[0]='R';
    h.print();
//value of n does not changes
    n.print();
}