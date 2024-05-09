//  2 constructor 
//  first constructor (single string )
// {
//     aman 
//     a : 2;
//     m : 1
//     n : 1
// } 
// second constructor ( mat [3][3]) 
// {
//     forward diagonal sum 
//     backward diagonal sum 
// }

#include<iostream>
using namespace std;

class CalculateStr{
    private:
    string s;
    int arr[26]={0};
    public:
    void insert(string s){
        this->s = s;
    }
    void logic(){
        for(int i = 0; s[i] != '\0'; i++){
            arr[s[i] - 'a']++;
        }
    }
    void show(){
        cout<<"Frequency of string: "<<endl;
        for(int i=0;i<26;i++){
            if(arr[i] > 0){
                cout<<(char)(i+'a')<<" : "<<arr[i]<<endl;
            }
        }
    }
};
class SumOfDiagonals{
    private:
    int arr[3][3];
    int sum, SUM;
    public:
    void insert(int mat[3][3]){
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr[i][j] = mat[i][j];
            }
        }
    }
    void forwardDiagonal(){
       sum = arr[0][0] + arr[1][1] + arr[2][2];
    }
    void backwardDiagonal(){
        SUM =  arr[0][2] + arr[1][1] + arr[2][0];
    }
    void show(){
        cout<<"Sum of forward Diagonals: "<<sum<<endl;
        cout<<"Sum of backward Diagonals: "<<SUM<<endl;
    }
};
int main(){
    CalculateStr cstr;
    cstr.insert("hello");
    cstr.logic();
    cstr.show();

    SumOfDiagonals sd;
    int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    sd.insert(mat);
    sd.forwardDiagonal();
    sd.backwardDiagonal();
    sd.show();

    return 0;
}