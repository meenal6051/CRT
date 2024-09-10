// Problem statement
// It is Edward's birthday today. His friends have bought him a huge circular cake.
// Edward wants to find out the maximum number of pieces he can get by making exactly N straight vertical cuts on the cake.
// Your task is to write a function that returns the maximum number of pieces that can be obtained by making N number of cuts.
// Note: Since the answer can be quite large, modulo it by 1000000007
// Input Specification:
// input1: An integer N denoting the number of cuts
// Output Specification:
// Return the maximum number of pieces that can be obtained by making N cuts on the cake.

// Input: 4
// Output: 11


// concept : 
// The problem is essentially about finding how many pieces you can get by making N straight cuts on a circular cake.
// The pattern for the maximum number of pieces can be derived as follows:
// 0 cuts = 1 piece
// 1 cut = 2 pieces
// 2 cuts = 4 pieces
// 3 cuts = 7 pieces
// 4 cuts = 11 pieces, and so on...
// The formula to calculate the maximum number of pieces with N cuts is: max_pieces = n(n+1)/2 + 1
// This is the sum of the first N natural numbers plus 1 (for the initial piece).
// Now, since the result can be quite large, we are required to return the result modulo 1000000007


#include<iostream>
using namespace std;

const int MOD = 1000000007;

int maxPieces(int N){
   long long pieces = ((long long)N * (N+1)) / 2 + 1;

    return pieces % MOD;
}

int main(){
    int N;
    cin >> N;

    int result = maxPieces(N);
    cout << result << endl;

    return 0;
}