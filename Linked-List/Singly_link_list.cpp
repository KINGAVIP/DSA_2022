#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }    
};
void insertathead(int data,Node* &head)
    {
        Node * temp=new Node(data);
        temp->next=head;
        head=temp;
    }
void insertatTail(int data,Node* &tail)
{
    Node*temp=new Node(data);
    tail->next=temp;
    temp->next=NULL;
    tail=temp;
}
void insertatPosition(int pos,int data,Node* &head,Node * &tail)
{
    if(pos==1)
    {
        insertathead(data,head);
        return;
    }
    Node*temp=head;
    int c=1;
    while(c<pos-1)
    {
        temp=temp->next;
        c++;
    }
    if(temp->next==NULL)
    {
        insertatTail(data,tail);
        return;
    }
    Node*node=new Node(data);
    node->next=temp->next;
    temp->next=node;
}
void print(Node * &head)
    {
        Node * temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
void deleteatval(int val,Node* &head,Node* &tail)
{
    Node*curr=head;
    Node*prev=NULL;
    while(curr!=NULL)
    {
        if(curr->data==val)
        {
            break;
        }
        else{
            prev=curr;
            curr=curr->next;
        }
    }
    if(curr==NULL)
    {
        cout<<endl<<"Element not found";
        return;
    }
    //first element
    if(curr==head)
    {
        Node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
    //last element
    if(curr->next==NULL)
    {
        prev->next=NULL;
        delete curr;
        tail=prev;
        return;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

}
void deleteATpos(int pos,Node* &head,Node* &tail)
{
    int c=1;
    if(pos==1)
    {
        Node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node*curr=head;
    Node*prev=NULL;
    while(c<pos)
    {
        prev=curr;
        curr=curr->next;
        c++;
    }
    if(curr->next==NULL)
    {
        prev->next=NULL;
        delete curr;
        tail=prev;
        return;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
int main()
{
    Node *nod1=new Node(10);
    cout<<nod1->data<<endl;
    cout<<nod1->next<<endl;

    Node * head=nod1;
    Node *tail=nod1;
    insertathead(20,head);
    insertatTail(22,tail);

    insertathead(15,head);

    insertatPosition(2,69,head,tail);
    // deleteATpos(3,head);

    print(head);
    deleteATpos(4,head,tail);
    cout<<endl;
    print(head);
    deleteatval(22,head,tail);
    cout<<endl;
    print(head);
    cout<<endl<<head->data;
    cout<<endl<<tail->data;
}