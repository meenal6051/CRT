#include<iostream>
#include<queue>
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

void bfs(Node *root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            
        Node *current = q.front();

        cout<< current->data << " ";

        if(current->left != NULL){
            q.push(current->left);
        }

        if(current->right != NULL){
            q.push(current->right);
        }

        q.pop();
        }
    cout << "\n";
}
}

int main()
{
    Node *root = dummyTree();
    cout << root->data << endl;

    bfs(root);
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

