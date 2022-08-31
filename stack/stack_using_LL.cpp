#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d)
    {
       this->data=d;
       this->next=NULL; 
    }

};
class stack{
    public:
    Node*top=NULL;
    void push(int d)
    {
        Node*dummy=new Node(d);
        if(top==NULL)
        {
            top=dummy;
        }
        else{
            dummy->next=top;
            // top->next=NULL;
            top=dummy;
        }
    }
    void pop()
    {
        if(top==NULL)
        {
            cout<<"underflow";
        }
        else{
            // cout<<top->data;
            top=top->next;
        }
    }
    void traverse()
    {
        Node*head=top;
        while(head)
        {
            cout<<head->data;
            head=head->next;
        }
    }
    void peek()
    {
        if(top)
        {
            cout<<top->data;
        }
    }
};

int main()
{
    stack s;
    s.push(2);
    s.push(4);
    s.push(8);
    s.push(4);
    s.push(11);
    s.push(11);
    s.pop();
    s.traverse();
    cout<<endl;
    s.peek();
}