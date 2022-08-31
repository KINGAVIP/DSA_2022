#include<iostream>
using namespace std;
class stack{
    int *arr;
    int size;
    int top;
    public:
    stack(int s)
    {
        this->size=s;
        top=-1;
        arr=new int[s];
    }
    void isempty()
    {
        if(top==-1)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }
    }
    void push(int d)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=d;
        }
        else
        {
            cout<<"overflow";
        }
    }
    void pop()
    {
        if(top>=0)
        {
            cout<<arr[top];
            top--;
        }
        else{
            cout<<"underflow";
        }
    }
    void peek()
    {
        if(top>=0 && top<=size)
        {
            cout<<arr[top];
        }
        else
        {
            cout<<"underflow";
        }
    }   
    void traverse()
    {
        int a=top;
        while(a>=0)
        {
            cout<<arr[a];
            a--;
        }
        cout<<endl;
    }
};

int main()
{
    stack st(5);
    st.push(1);
    st.isempty();
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.traverse();
    st.pop();
    cout<<endl;
    st.traverse();
    // st.push(6);
}