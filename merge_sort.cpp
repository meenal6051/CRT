// C++ program for Merge Sort
#include <bits/stdc++.h>
using namespace std;

// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid,
           int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;

    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;

    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }

    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;

    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}

// This code is contributed by Mayank Tyagi
// This code was revised by Joshua Estes


// #include <iostream>
// #include <iterator>
// #include <vector>
// using namespace std;

// #define forn(i,n) for(i=0; i<n; i++)

// void input_arr(vector<int>& arr, int n){
//     int i;
//     forn(i,n){
//         cin >> arr[i];
//     }
// }

// void print(const vector<int>& arr){
//     for(int val : arr){
//         cout << val << " ";
//     }
//     cout << endl;
// }

// vector<int> solve(const vector<int>& a, const vector<int>& b){
//     int n = a.size();
//     int m = b.size();
//     int i = 0, j = 0;
//     vector<int> ans;
//     while(i < n && j < m){
//         if(a[i] < b[j]){
//             ans.push_back(a[i]);
//             i++;
//         } else {
//             ans.push_back(b[j]);
//             j++;
//         }
//     }
//     while(i < n) {
//         ans.push_back(a[i]);
//         i++;
//     }

//     while(j < m) {
//         ans.push_back(b[j]);
//         j++;
//     }
//     return ans;
// }

// int main(){
//     int size, size2;
    
//     cout << "Arr1 size: ";
//     cin >> size;
//     vector<int> arr(size);
//     input_arr(arr, size);
    
//     cout << "Arr2 size: ";
//     cin >> size2;
//     vector<int> arr2(size2);
//     input_arr(arr2, size2);
    
//     vector<int> arrres = solve(arr, arr2);
//     copy(arrres.begin(),
//          arrres.end(),
//          ostream_iterator<int>(cout, " "));
//     cout << endl;

//     return 0;
// }