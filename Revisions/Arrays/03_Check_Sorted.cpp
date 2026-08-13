#include <iostream>
#include <vector>
using namespace std;
void sortedArray(vector <int> &arr){
    for (int i = 0; i < arr.size()- 1; i++){
        if (arr[i] <= arr[i + 1]){
        }
        else if (arr[i] > arr[i + 1]){
            cout << "not an sorted array" << " ";
            return;
        }
    }
    cout <<"it is a sorted array" << " ";
    return;
}
int main(){
    vector <int> arr = { 1,2,3,4,5};
    sortedArray(arr);
    return 0;
}