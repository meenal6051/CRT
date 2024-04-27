// Recursive function to check if a string is a pallindrome
#include<iostream>
using namespace std;

bool isPallindrome(const string &text, int start, int end){
    if(start >= end){
        return true;
    }
    if(text[start] != text[end]){
        return false;
    }
    return isPallindrome(text, start+1, end-1);
}

int main(){
    string text;

    cout<<"Input a String: ";
    cin>>text;

    bool pallindrome = isPallindrome(text, 0, text.length() - 1);

    // Display the result
    if (pallindrome)
    cout<<"\nThe String is Pallindrome";
    else
    cout<<"\nThe String is not Pallindrome";

    return 0;
}