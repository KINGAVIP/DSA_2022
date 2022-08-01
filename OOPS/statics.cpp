#include<iostream>
using namespace std;
class Hero{
    public:

    static int time_to_complete;
    int health;
    static int always()
    {
        //only static member access
        cout<<time_to_complete;

        //cannot use this pointer as static function does not belong to any object
        // return this->health;
        // cout<<health;
    }
};
int Hero::time_to_complete=10;
int main()
{
    Hero a;
    cout<<Hero::time_to_complete;
    cout<<a.time_to_complete;
    cout<<endl;
    cout<<Hero::always();

}