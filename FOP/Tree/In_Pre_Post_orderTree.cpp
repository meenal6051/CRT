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
    temp->left = temp->right = NULL;
    return temp;
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

int preOrder(Node *currentNode){
    if(currentNode == NULL){
        return 0;
    }
    cout << currentNode->data << " ";
    preOrder(currentNode->left);
    preOrder(currentNode->right);
}

int InOrder(Node *currentNode){
    if(currentNode == NULL){
        return 0;
    }
    InOrder(currentNode->left);
    cout << currentNode->data << " ";
    InOrder(currentNode->right);
}

int postOrder(Node *currentNode){
    if(currentNode == NULL){
        return 0;
    }
    postOrder(currentNode->left);
    postOrder(currentNode->right);
    cout << currentNode->data << " ";
}

int main()
{
    Node *root = dummyTree();
    cout<<root->data<<endl;
    preOrder(root);
    cout<<"\n";
    InOrder(root);
    cout<<"\n";
    postOrder(root);
}

