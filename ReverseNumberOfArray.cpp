#include<iostream>
using namespace std;

void inputArray(int arr[], int size){
    cout<<"Enetr " << size << " elements of the array: " << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
}
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
void displayArray(int arr[], int size){
    cout<<"Array Elements: " << endl;
    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int *arr = new int[size];

    inputArray(arr, size);
    reverseArray(arr, size);
    displayArray(arr, size);

    delete[] arr;

    return 0;
}