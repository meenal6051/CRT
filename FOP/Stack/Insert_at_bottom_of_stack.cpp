#include<iostream>
#include<stack>
using namespace std;

int InsertAtBottom(stack<int> &st, int element){
    if(st.empty()){
        st.push(element);
        return 1;
    }
    int topElement = st.top();
    st.pop();
    InsertAtBottom(st,element);
    st.push(topElement);
    return 0;
}

int reverse(stack<int> &st){
    if(st.empty()){
        return -1;
    }
    int element = st.top();
    st.pop();
    reverse(st);
    InsertAtBottom(st,element);
    return 0;
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}