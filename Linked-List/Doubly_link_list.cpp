#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
Node*head=NULL;
Node*tail=NULL;
void print(Node * head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getLength(Node * head)
{
    int c=1;
    Node*temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
void insertAtHead(int data,Node* &head)
{
    if(head==NULL)
    {
        Node*node=new Node(data);
        head=node;
        tail=node;
        return;
    }
    Node*node=new Node(data);
    node->next=head;
    head->prev=node;
    head=node;
}
void insertattail(int data,Node* &tail)
{
    if(tail==NULL)
    {
        Node*node=new Node(data);
        head=node;
        tail=node;
        return;
    }
    Node*node=new Node(data);
    tail->next=node;
    node->prev=tail;
    tail=tail->next;
    node->next=NULL;
}

void insertatpos(int pos,int data,Node* &head,Node* &tail)
{
    if(pos==1)
    {
        insertAtHead(data,head);
        return;
    }
    Node*temp=head;
    int i=1;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    if(temp->next==NULL)
    {
        insertattail(data,tail);
        return;
    }
    Node*node=new Node(data);
    node->next=temp->next;
    temp->next->prev=node;
    temp->next=node;
    node->prev=temp;
}

void deleteatpos(int pos,Node* &head,Node* &tail)
{
    if(pos==1)
    {
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    Node*nod=head;
    Node*nodprev=NULL;
    int i=1;
    while(i<pos)
    {
        nodprev=nod;
        nod=nod->next;
        i++;
    }
    if(nod->next==NULL)
    {
        nodprev->next=NULL;
        tail=nodprev;
        nod->prev=NULL;
        delete nod;
        return;
    }
    nodprev->next=nod->next;
    nod->next->prev=nodprev;
    nod->prev=NULL;
    nod->next=NULL;
    delete nod;
}
int main()
{
    // Node* node=new Node(12);
    insertAtHead(15,head);
    insertAtHead(21,head);
    insertattail(30,tail);
    insertattail(50,tail);
    print(head);
    insertatpos(5,20,head,tail);
    cout<<endl;
    print(head);
    deleteatpos(5,head,tail);
    cout<<endl;
    print(head);
    cout<<endl<<head->data;
    cout<<endl<<tail->data;
    // cout<<endl<<getLength(head);
}
