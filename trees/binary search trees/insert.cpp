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

Node* insert(Node *root , int val) {
    if(root == NULL) return new Node(val);

    Node * curr = root;  //making a copy of root bec. if we dont't and iterate using the root then root pointer will be at end
    while(true) {
        if(curr->data > val) {   //then we have move to left side
            // what if it is the leaf node, then we have to insert node at left side of the node 
            if(curr->left == NULL) {
                curr->left = new Node(val);
                break;
            }
            curr = curr->left;
        } else {
            if(curr->right == NULL) {
                curr->right = new Node(val);
                break;
            } curr = curr->right;
        }
    } return root;
}

void inOrder(Node *root) {
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
  Node* root = new Node(4);
  root->left = new Node(2);
  root->right = new Node(6);
  root->left->left = new Node(1);
  root->left->right = new Node(3);
  root->right->left = new Node(5);
  root->right->right = new Node(8);
  inOrder(insert(root , 7));
}