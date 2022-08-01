#include<iostream>
using namespace std;
void revz(string& s,int i)
{
    
    int j=s.length()-1-i;
    if(i>j)
    {
        return;
    }
    cout<<j<<endl;
    swap(s[i],s[j]);
    i++;
    revz(s,i);
}
int main()
{
    string s="Kingishere";
    revz(s,0);
    cout<<endl<<s;
}