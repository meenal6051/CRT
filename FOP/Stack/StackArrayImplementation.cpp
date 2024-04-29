#include<iostream>
#include <stdexcept>
using namespace std;
#define n 100

class stack{
    int *arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    int push(int x){
        if(top == n-1){
            cout<<"Stack Overflow"<<endl;
            return -1;
        }
        top ++;
        arr[top] = x;
        return 0;
    }

    int pop(){
        if(top == -1){
            cout<<"There is no element to pop in the stack"<<endl;
            return -1;
        }
        top --;
        return arr[top+1];
    }

    int Top(){
        if(top == -1){
            cout<<"No element in the Stack"<<endl;
            exit(1);
        }
        return arr[top];
    }

    bool empty(){
        return top == -1;
    }
};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;

    return 0;
}
