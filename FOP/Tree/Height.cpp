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

//classes and struct m access specifier is the difference 
//struct k acess kr skte h khi bhi 

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
    cout<<"Height of the tree is " << depth(root) << endl;
}




