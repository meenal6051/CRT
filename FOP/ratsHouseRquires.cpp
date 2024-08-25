#include<iostream>
using namespace std;
#include<vector>

int minHouseRequires(int r, int unit, const vector<int> &arr){
    if(arr.empty()){
        return -1;
    }

    int foodrequired = r * unit;
    int totalfood = 0;

    for(int food : arr){
        totalfood += food;
    }

    if(totalfood < foodrequired){
        return 0;
    }

    int currentfood = 0;
    int houses =0;

    for(int food : arr){
        currentfood += food;
        houses++;

        if(currentfood >= foodrequired){
            return houses;
        }
    }
    return houses;
}

int main(){
    int r,unit,n;
    cout<<"Enter number of rats in the area : ";
    cin>>r;
    cout<<"Enter the amount of food each rat consumes : ";
    cin>>unit;
    cout<<"Enter the number of houses: ";
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = minHouseRequires(r, unit, arr);
    if(result == -1){
        cout << "Array is null" << endl;
    }else if(result == 0){
        cout << "Total food is not sufficient for all the rats" << endl;
    }else{
        cout << "Minimum number of houses required : " << result << endl;
    }
    return 0;
}