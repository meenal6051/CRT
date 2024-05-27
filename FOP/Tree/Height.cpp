#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
};

int maxdepth(node *node){
    if(node == NULL){
        return 0;
    }
    else{
        int ldepth = maxdepth(node->left);
        int rdepth = maxdepth(node->right);

        if(ldepth > rdepth){
            return (ldepth+1);
        }
        else{
            return (rdepth+1);
        }
    }
}

node * newNode(int data){
    node *Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return(Node);
}

int main(){
    node *root = newNode(0);

    root->left = newNode(1);
    root->right = newNode(2);
    root->left->left = newNode(3);

    root->left->right = newNode(4);

    root->right->left = newNode(5);

    root->right->right = newNode(6);

    root->left->left->left = newNode(7);
    root->left->left->right = newNode(8);

    root->left->right->left = newNode(9);
    root->left->right->right = newNode(10);

    root->right->left->left = newNode(11);
    root->right->left->right = newNode(12);

    root->right->right->left = newNode(13);
    root->right->right->right = newNode(14);

    cout<< "Height of tree is " << maxdepth(root);
    return 0;

}