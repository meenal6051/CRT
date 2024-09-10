// Problem statement Mr. Professor is a great scientist, but he is not able to find a solution to one problem.
// There are N straight lines that are not parallel, and no three lines go through the same point.
// The lines divide the plane into M regions.
// Write a function to find out the maximum number of such regions he can get on the plane.

// Input Specification:
// input1: An integer N representing the number of straight lines (0 <=N<= 100)
// Output Specification:
// Return the maximum number of regions

// concept :
// If there are 0 lines, there is only 1 region (the whole plane).
// Each time you add a new line, it can intersect all the previous lines at new points, dividing some regions further.
// The number of regions created by adding N lines follows the pattern:
// 0 lines = 1 region
// 1 line = 2 regions
// 2 lines = 4 regions
// 3 lines = 7 regions
// 4 lines = 11 regions
// And so on...

#include<iostream>
using namespace std;

int maxRegions(int N){
    return (N * (N+1)) / 2 + 1;
}

int main(){
    int N;
    cin >> N;

    int result = maxRegions(N);
    cout << result << endl;

    return 0;
}