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

//iterative
// intution : we make a quene to store the root and it's chile count
int length_itrative(Node *root) {
    queue<pair<Node* , int> > q;
    q.push({root , 1});
    while(!q.empty()) {
        Node* currRootNode = q.front().first;
        if(currRootNode->left) q.push({currRootNode->left , q.front().second+1});
        if(currRootNode->right) q.push({currRootNode->right , q.front().second+1});

        //condition when only leaf is their 
        if(q.size() == 1) {  //means it's the last node of the longest sequence
            return q.front().second;
        }
        q.pop();
    } return -1;
}

int length_recursive(Node *root) {
    if(root == NULL) return 0;
    int lm = length_recursive(root->left);  //left max
    int rm = length_recursive(root->right);  //right max
    return 1 + max(lm , rm);
    }
int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->right->right = new Node(6);
  root->right->left = new Node(4);
  root->right->right->right = new Node(5);
  cout<<length_itrative(root)<<length_recursive(root);
}