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

};

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
}
// int maxdepth(node *node){
//     if(node == NULL){
//         return 0;
//     }
//     else{
//         int ldepth = maxdepth(node->left);
//         int rdepth = maxdepth(node->right);

//         if(ldepth > rdepth){
//             return (ldepth+1);
//         }
//         else{
//             return (rdepth+1);
//         }
//     }
// }



