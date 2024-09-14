#include<iostream>
using namespace std;

int lastWordLength(string s){
    int n = s.size();
    int count = 0;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == ' ' && count > 0){
            break;
        }
        if(s[i] != ' '){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    getline(cin , s);

    cout << lastWordLength(s) << endl;
    return 0;
}