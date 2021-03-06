#include<iostream>
using namespace std;

struct Node
{
    int data ;
    Node* left;
    Node* right;
    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void pre(Node* root) {
    if(root == NULL) {
        return;
    }
    cout<<root->data;
    pre(root->left);
    pre(root->right);
}
void post(Node* root)
{
    if (root == NULL)
        return;
    post(root->left);
    post(root->right);
    cout<<root->data;
}
 
void inorder(Node* root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  pre(root);
  cout<<endl;
  post(root);
  cout<<endl;
  inorder(root);
}