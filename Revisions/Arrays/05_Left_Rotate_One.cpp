#include <iostream>
#include <vector>
using namespace std;
void leftRotation(vector <int> &arr){
    int temp = arr[0];
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++){
        arr[i] = arr[i + 1];
    }
    arr [n - 1] = temp;
}
int main(){
    vector <int> arr = { 1,2,3,4,5};
    leftRotation(arr);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i]<< " ";
    }
    return 0;
}