#include<iostream>
using namespace std;

int main(){
    int v, w;
    cout << "Enter number of vehicles(V): ";
    cin >> v;
    cout << "Enter total number of wheels(W): ";
    cin >> w;
    
    if(w < 2 || w % 2 != 0 || w <= v){
        cout << "INVALID INPUT" << endl;
        return 0;
    }
    int FW = (w - 2*v)/2; 
    int TW = v - FW;

    if(FW >= 0 && TW >= 0 && (FW*4 + TW*2) == w){
        cout << "TW = " << TW << endl;
        cout << "FW = " << FW << endl;
    }else{
        cout << "INVALID INPUT" << endl;
    }
    return 0;
}