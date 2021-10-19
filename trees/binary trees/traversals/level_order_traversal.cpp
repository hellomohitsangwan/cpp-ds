#include<iostream>
#include <queue>
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

void print_level_order(Node *root) {
  queue<Node *> q;
  if(root == NULL) return;
  q.push(root);
  q.push(NULL);
  while(!q.empty()) {
    Node* curr = q.front();
    q.pop();
    if(curr != NULL) {
      cout<<curr->data<<" ";
      //we have to check if left and right child exist
      if(curr->left) {
        q.push(curr->left);
      }
      if(curr->right) {
        q.push(curr->right);
      }
    }
    //if curr is NULL then we have to check if more level eists
    else {
      if(!q.empty()) {
        q.push(NULL);
        cout<<"\n";
      }
    }
  }
}


int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  print_level_order(root);
}