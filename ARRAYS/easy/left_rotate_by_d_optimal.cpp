#include <iostream>
#include <vector>
using namespace std;
void reverseArray(vector <int> &arr, int start, int end){
    while (start < end){
        int temp = arr [start];
        arr [start] = arr[end];
        arr [end] = temp;
        start ++;
        end --;
    }
}
void reverseArraybyD(vector <int> &arr, int d){
    int n = arr.size();
    d = d % n;
    reverseArray(arr, 0 , d - 1 );
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);
}
int main(){
    int d = 2;
    vector <int> arr = { 1,2,3,4,5,6,7,8,9};
    reverseArraybyD(arr, d);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i]<<" ";
    }
    return 0;
}