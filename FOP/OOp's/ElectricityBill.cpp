#include<iostream>
using namespace std;

class ElectricityBill{
    int n;
    int bill;
    public:
    void insert(int units){
        n = units;
    }
    void logic(){
        if(n >= 0 && n <= 100){
            bill = 200;
        }
        else if(n <= 200){
            bill = (n-100)*2 + 400;
        }
        else if(n <= 300){
            bill = (n-200)*3 + 600;
        }
        else if(n <= 400){
            bill = (n-300)*5 + 900;
        }
        else {
            bill = (n-400)*7 + 1400;
        }
    }
    void display(){
        cout<<"Electricity Bill :  "<<bill<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter no. of units: ";
    cin>>n;
    ElectricityBill bills;
    bills.insert(n);
    bills.logic();
    bills.display();
    return 0;
}