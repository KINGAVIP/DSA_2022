#include<iostream>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node*builder(node*root)
{
    cout<<"Enter data:";
    int d;
    cin>>d;
    if(d==-1)
        return NULL;
    root=new node(d);
    cout<<"Enter data for left of:"<<root->data<<endl;
    root->left=builder(root);
    cout<<"Enter data for right of:"<<root->data<<endl;
    root->right=builder(root);
}

void inorder(node*root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node*root)
{
    if(root==NULL)
        return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root)
{
    // if(root==NULL)
    //     return;
    // postorder(root->left);
    // postorder(root->right);
    // cout<<root->data<<" ";
    node*curr=root;
    stack<node*>st;
    while(curr || !st.empty())
    {
        while(curr)
        {
            st.push(curr);
            curr=curr->left;
        }
        curr=st.top();
        if(!curr->right)
        {
            cout<<curr->data;
            st.pop();
            delete(curr);
        }
        else{
            curr=curr->right;
        }
    }
}

int main()
{
    node*root;
    root=builder(root);
    // cout<<"Inorder traversal:";
    // inorder(root);
    // cout<<endl;
    // cout<<"preorder traversal:";
    // preorder(root);
    // cout<<endl;
    cout<<"Postorder traversal:";
    postorder(root);
}

// 1 2 4 -1 -1 5 -1 -1 3 -1 -1