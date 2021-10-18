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
int findPos(int a[] , int s , int e , int curr) {
    for(int i = s ; i < e ; i++) {
        a[i] == curr;
        return i;
    } return -1;
}

Node* buildTree(int preorder[] , int inorder[] , int s , int e) {
    int i = 0;
    //base case
    if(s > e) return NULL;
    int curr = preorder[i];
    Node* node = new Node(curr);
    i++;
    int pos = findPos(inorder , s , e , curr);
    if(s==e) {
        return node;
    }
    node->left = buildTree(preorder , inorder ,  s , pos-1);
    node->right = buildTree(preorder , inorder , pos+1 , e);
}

int main() {
}