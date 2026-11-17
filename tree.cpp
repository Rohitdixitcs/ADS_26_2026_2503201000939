#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};
int leafcount(struct node *p)
{
    if (p == NULL)
        return 0;
    if (p->left == NULL && p->right == NULL)
        return 1;
    return leafcount(p->left) + leafcount(p->right);
}
int main()
{
    node *root = new node{10, NULL, NULL};
    root->left = new node{5, NULL, NULL};
    root->right = new node{20, NULL, NULL};
    root->left->left = new node{2, NULL, NULL};
    root->left->right = new node{7, NULL, NULL};
    cout << "Number of leaf nodes = " << leafcount(root);
    return 0;
}