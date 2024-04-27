// Recursive function to calculate the sum of digits of a number.
#include<iostream>
using namespace std;

int SumOfdigits(int number){
    if(number >= 0 && number <= 9){
        return number;
    }

    return (number % 10) + SumOfdigits(number / 10);
}

int main(){
    int n;
    cout<<"Input a number : ";
    cin>>n;
    int sum = SumOfdigits(n);
    cout<<"The Sum Of digits of "<<n<<" is: "<<sum;
    return 0;
}