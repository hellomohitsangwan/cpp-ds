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
int findPos(int a[] , int start , int end , int curr) {
    for (int i = start; i <= end; i++)
    {
        if (a[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[] , int inorder[] , int start , int end) {
    static int i = 0 ;
    if (start > end)
    {
        return NULL;
    }

    int curr = preorder[i];
    i++;
    Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }
    int pos = findPos(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos-1);
    node->right = buildTree(preorder, inorder, pos+1, end);

    return node;
}
void print_inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_inorder(root->left);
    cout << root->data << " ";
    print_inorder(root->right);
}
int main() {
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    Node *root = buildTree(preorder, inorder, 0, 4);
    print_inorder(root);

    return 0;
}