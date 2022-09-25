#include<stack>
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d)
    {
        this->data=d;
        left=NULL;
        right=NULL;
    }
};
node* buildtree(node*root)
{
    cout<<"Enter the data:";
    int d;
    cin>>d;
    if(d==-1)
        return NULL;
    root=new node(d);
    cout<<"Enter the data for left "<<root->data<<endl;
    root->left=buildtree(root);
    cout<<"Enter the data for right of "<<root->data<<endl;
    root->right=buildtree(root);
}

void levelorder(node*root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();
        if(temp!=NULL)
        {
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        else
        {
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
    }
}

void reverselevel(node*root)
{
    
    queue<node*>q;
    stack<node*>st;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node*temp=q.front();
        st.push(temp);
        q.pop();
        if(temp!=NULL)
        {
            // cout<<temp->data<<" ";
            if(temp->right)
                q.push(temp->right);
            if(temp->left)
                q.push(temp->left);
            
        }
        else
        {
            // cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
    }
    while(!st.empty())
    {
        if(st.top()==NULL)
            cout<<endl;
        else
            cout<<st.top()->data<<" ";
        st.pop();
    }

}
int main()
{
    node*root;
    root=buildtree(root);
    reverselevel(root);
}
//1 2 6 -1 -1 8 -1 -1 4 10 -1 -1 12 -1 -1