#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertatele(Node* &tail,int element,int data)
{
    if(tail==NULL)
    {
        Node*temp=new Node(data);
        tail=temp;
        temp->next=temp;
        return;
    }
    Node*curr=tail;
    while(curr->data!=element)
    {
        curr=curr->next;
    }
    Node*temp=new Node(data);
    temp->next=curr->next;
    curr->next=temp;
}
void print(Node*tail)
{
    if(tail==NULL)
    {
        cout<<"List is Empty";
        return;
    }
    Node*temp=tail;
    do{
       cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
}
void delele(Node* &tail,int ele)
{
    if(tail==NULL)
    {
        cout<<"List is empty";
        return;
    }
    Node*prev=tail;
    Node*curr=prev->next;
    while(curr->data!=ele)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr==prev)
    {
        tail=NULL;
    }
    if(tail==curr)
    {
        tail=prev;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}

int main(){
    Node*tail=NULL;
    insertatele(tail,0,5);
    insertatele(tail,5,10);
    insertatele(tail,10,15);
    insertatele(tail,10,20);
    print(tail);
    cout<<endl;
    delele(tail,5);
    print(tail);
    cout<<endl<<tail->data;
}