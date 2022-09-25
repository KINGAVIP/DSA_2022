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
int main()
{
    node*root;
    root=buildtree(root);
}