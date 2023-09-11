#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<stack>
#include<string>

using namespace std;

struct node{
    int data;
    node  *left;
    node  *right;
};

node  *createnode(int data)
{
    node *newnode= new node();
    newnode->data=data;
    newnode->left=newnode->right=nullptr;
    return newnode;
}
node *insert (node* &root, int data)
{
    if(root==0)
    {
       root=createnode(data);
    }
    else if(root->data>data)
    {
        insert(root->left,data);
    }
    else insert(root->right,data);
}
void display(node *root)
{
    if(root!= NULL)
    {
        cout <<root->data << endl;
        display (root->left);
        display(root->right);
    }
}
int main()
{
    node *root=NULL;
    int num,n;
    cout << "Enter data";
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> num,insert(root,num);
        cout << root->left->data<< endl;

    }




