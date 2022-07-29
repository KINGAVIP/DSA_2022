#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
//Shalow copy->using the default copy constructor
class Hero{
    int health;
    public:
    char *name;
    char level;
    public:
    Hero()
    {
        cout<<"Simple constructor called";
        name=new char[100];
    }
    Hero(int health,char level)
    {
        this->level=level;
        this->health=health;

    }
    void print()
    {
        cout<<"name:"<<this->name<<endl;
        cout<<"Health :"<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
    }
    void sethealth(int h)
    {
        this->health=h;
    }
    void setname(char name[])
    {
        strcpy(this->name,name);
    }
};

int main(){
    Hero h;
    h.sethealth(10);
    char name[4]="avi";
    h.setname(name);
    h.print();

    Hero n(h);
    n.print();
    cout<<endl;

//Shallow copy->same memory access
    h.name[0]='R';
    h.print();
//value of n also chanegs changes
    n.print();
}