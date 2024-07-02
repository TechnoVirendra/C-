#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }

};

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(2);
    root->left = new Node(4);
    
    
}