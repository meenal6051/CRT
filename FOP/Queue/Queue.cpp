#include<iostream>
#include<stdexcept>
using namespace std;
#define n 100

class queue{
    int *arr;
    int front;
    int rear;


    public:
    queue(){
        arr = new int[n];
        front = n-1;
        rear = -1;
    }

    int push(int x){
        if(front == -1){
            cout<<"Queue Overflow"<<endl;
            return -1;
        }
        front ++;
        arr[front] = x;
        return 0;
    }

    int pop(){
        if(front == n){
            cout<<"There is no element to pop in the queue"<<endl;
            return -1;
        }
        front --;
        return arr[front+1];
    }

    int Top(){
        if(front == -1){
            cout<<"No element in the queue"<<endl;
            exit(1);
        }
        return arr[front];
    }

    bool empty(){
        return front == -1;
    }
};

int main(){
    queue q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   cout << q.Top() << endl;
   q.pop();
   q.pop();
   cout<<q.empty()<<endl;

    return 0;
}
