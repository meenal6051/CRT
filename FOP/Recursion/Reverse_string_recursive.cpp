#include<iostream>
using namespace std;

void reverse_string(string &text, int start , int end){
    if(start >= end)
    return;
    swap(text[start], text[end]);

    reverse_string(text, start+1, end-1);
}
int main(){
    string text;
    cout<<"Input a string: ";
    cin>> text;
    // getline(cin,text);

    reverse_string(text, 0, text.length() - 1);
    cout<<"Reversed String: "<<text;
    return 0;
}
