#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Default Constructor
    Node(){
        data = 0;
        next = NULL;
    }

    // Parameterized Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    Node(int data, Node *next){
        this->data = data;
        this->next = NULL;
    }
};

// class search{

// }

