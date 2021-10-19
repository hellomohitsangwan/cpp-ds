#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

int search(int inorder[], int start, int end, int val)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
    }
    return -1;
}
Node *maketree(int postorder[], int inorder[], int start, int end)
{
    static int i = 4;
    if (start > end)
    {
        return NULL;
    }

    int curr = postorder[i];
    i--;
    Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }
    int pos = search(inorder, start, end, curr);
    node->right = maketree(postorder, inorder, pos+1, end);
    node->left = maketree(postorder, inorder, start, pos-1);

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
int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    Node *root = maketree(postorder, inorder, 0, 4);
    print_inorder(root);

    return 0;
}