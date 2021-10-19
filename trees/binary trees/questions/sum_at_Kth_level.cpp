#include<iostream>
#include<queue>
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

int level_sum_at_k(Node* root , int k) {
    //k starts from 0
          queue<Node *> q;
  if(root == NULL) return 1;
  q.push(root);
  q.push(NULL);
        int ls = 0;
        int level = 0;
  while(!q.empty()) {
    Node* curr = q.front();
    q.pop();
      
    if(curr != NULL) {
        if(level == k) {
            ls += curr->data;
        }
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
        level++;
        if(level > k) {
            break;
        }
      if(!q.empty()) {
        q.push(NULL);
        cout<<"\n";
      }
    }
  } return ls;
    }

int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  cout<<level_sum_at_k(root,2);
}