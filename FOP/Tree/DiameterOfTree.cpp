#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
};

Node* newNode(int item)
{
    Node* temp = new Node;
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int depth(Node *current_node){
    if(!current_node){
        return 0;
    }
    return 1 + max(depth(current_node->left),depth(current_node->right));
}

int diameter(Node *current_node){
    if(!current_node){
        return 0;
    }
    int left_height = depth(current_node->left);
    int right_height = depth(current_node->right);

    int left_diameter = diameter(current_node->left);
    int right_diameter = diameter(current_node->right);

    return max(left_height + right_height + 1 , max(left_diameter, right_diameter));
}

Node *dummyTree()
{
    Node *root = newNode(0);
    root->left = newNode(1);
    root -> right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);

    return root;
}

int main()
{
    Node *root = dummyTree();
    cout<<root->data<<endl;
    cout<<"Diameter of the tree is " << depth(root->left) + depth(root->right) + depth(root) << endl;
    return 0;
}