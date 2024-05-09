#include<iostream>
using namespace std;

class Bank{
    public:
    void ROI(){
        cout<<"General Rate";
    }
};
class SBI : public Bank{
    public:
    void ROI(){
        cout<<"10.99";
    }
};
int main(){
    SBI s;
    s.ROI();
    return 0;
}