#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int a =32;
    int b = a>>3;
    int c = 258;

    cout << "a =  " << bitset<8>(a) << endl;
    cout << "b =  " << bitset<8>(b) << endl;
    cout << "c =  " << bitset<16>(c) << endl;

}