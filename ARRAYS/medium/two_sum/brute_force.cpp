#include <iostream>
#include <vector>
using namespace std;
void twoSum (vector <int> &arr, int target){
    for (int i = 0; i < arr.size(); i++){
        for (int j = i + 1; j < arr.size(); j++){
            if (arr[i] + arr[j] == target){
                cout << "Found";
                return;
            }
        }
    }
    cout << "not found";
}

int main(){
    int target;
    target = 14;
    vector <int> arr = { 2,6,5,8,11};
    twoSum(arr,target);
    return 0;
}