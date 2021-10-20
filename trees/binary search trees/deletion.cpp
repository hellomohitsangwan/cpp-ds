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

Node * deleteNode(Node *root , int val) {
    /*
    first we find the root and then after finding we'll remove that node and right side tree of that node (child) would be connected to left side right last child
    if it have only child then we'll add that to the left side
    */

//    first we find the root
// normal binary search
    Node *dummy = root;
    while(root != NULL) {
        if(root->data > val) {
            //if next node is our target or not
            if(root->left  != NULL && root->left->data == val) {
                // we found node , now we have to change the left link
                root->left = deleteLink(root->left);
            }else {
            //move in left side
                root = root->left;
            }
        } else {
            if(root->right != NULL && root->right->data == val) {
                root->right = deleteLink(root->right);

            } else {
                root = root->right;
            }
        }
    } return dummy;

}
Node *deleteLink(Node * root) {
    //what is it have only one child
    if(root->left == NULL) {
        return root->right;
    } 
    if(root->right == NULL) {
        return root->left;
    }

    //if the node have both childrens
    // move the right child to left last's child of leaf (bec. right child is always greater than the left so adding to left's end will not break the condn. for bst)
    // or we can move t he left child to right last left child

    Node* rightChild = root->right;
    Node* leftLstRightChild = last(root->right);
    leftLstRightChild->right = rightChild;
    return root->right;
}
Node* last(Node *root) {
    if(root->right == NULL) return root;
    return last(root->right);
}
int main() {
  Node* root = new Node(4);
  root->left = new Node(2);
  root->right = new Node(6);
  root->left->left = new Node(1);
  root->left->right = new Node(3);
  root->right->left = new Node(5);
  root->right->right = new Node(8);
}