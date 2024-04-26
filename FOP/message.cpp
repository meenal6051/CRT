#include<iostream>
using namespace std;

class Message {

    public:
    void hii();
    void bye();
};

int main(){
    Message *m1= new Message;
    cout<<"Welcome to Jaipur";
    cout<<"";
    m1->hii();
    cout<<"";
    m1->bye();
}

void Message::hii(){
    cout<<"\nHii";
}
void Message::bye(){
    cout<<"\nBye";
}

