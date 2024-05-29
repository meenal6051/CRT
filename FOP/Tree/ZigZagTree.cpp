#include<iostream>
#include<deque>
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

void ZigZagTraversal(Node *root){
    if(root == NULL)
        return;
    
    deque<Node*> nodes; // Deque to store nodes
    nodes.push_back(root); // Push root node
    
    // Keep track of the current level
    bool leftToRight = true;
    
    while(!nodes.empty()) {
        int levelSize = nodes.size(); // Number of nodes in the current level
        
        for(int i = 0; i < levelSize; ++i) {
            if(leftToRight) {
                // Process nodes from left to right
                Node *temp = nodes.front();
                nodes.pop_front();
                cout << temp->data << " ";
                
                // Push children of the current node to the back of the deque
                if(temp->left)
                    nodes.push_back(temp->left);
                if(temp->right)
                    nodes.push_back(temp->right);
            } else {
                // Process nodes from right to left
                Node *temp = nodes.back();
                nodes.pop_back();
                cout << temp->data << " ";
                
                // Push children of the current node to the front of the deque
                if(temp->right)
                    nodes.push_front(temp->right);
                if(temp->left)
                    nodes.push_front(temp->left);
            }
        }
        
        leftToRight = !leftToRight; // Toggle the direction for the next level
    }
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
    // cout<<root->data<<endl;

    cout << "ZigZag Traversal: ";
    ZigZagTraversal(root);
    cout << endl;
    
    return 0;
}

