#include<iostream>
#include<stack>
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

// int InOrder(Node *currentNode){
//     if(currentNode == NULL){
//         return 0;
//     }
//     InOrder(currentNode->left);
//     cout << currentNode->data << " ";
//     InOrder(currentNode->right);

// }

void dfs(Node *root){
    if(root == NULL){
        return;
    }

    stack<Node*> s;
    s.push(root);

    while(!s.empty()){
        Node *current = s.top();
        s.pop();

        cout << current->data << " ";

        if(current->right != NULL){
            s.push(current->right);
        }

        if(current->left != NULL){
            s.push(current->left);
        }
    }
}

int main()
{
    Node *root = dummyTree();
    cout << root->data << endl;
    // InOrder(root);
    // cout << endl;

    dfs(root);
    cout << endl;

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;
    
    return 0;
}

