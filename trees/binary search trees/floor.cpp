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

// lowest value bigger than val
int floor(Node *root , int val) {
    int floor = -1;
    while(root != NULL) {
        if(root->data == val) {
            floor = val;
            break;
        } else {
            if(root->data < val) {  //we'll only update out floor whenever the node data is lesser than the value bec. floor <= val
                floor = root->data;
                root = root->right;
            } else {
                root = root->left;
            }
        }
    } return floor;
}

int main() {
  Node* root = new Node(4);
  root->left = new Node(2);
  root->right = new Node(6);
  root->left->left = new Node(1);
  root->left->right = new Node(3);
  root->right->left = new Node(5);
  root->right->right = new Node(8);
  cout<<floor(root , 7);
}