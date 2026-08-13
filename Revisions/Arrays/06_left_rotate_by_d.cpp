#include <iostream>
#include <vector>
using namespace std;
void leftRotation1 (vector <int> &arr, int start, int end){
    int temp;
    while (start < end){
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
    }
}
void reverseArray(vector <int> &arr, int d){
    int n = arr.size();
    d = d % n;
    leftRotation1(arr, 0, d - 1 );
    leftRotation1(arr, d , n - 1);
    leftRotation1(arr, 0 , n - 1);
}
int main(){
    int d;
    cin >> d;
    vector <int> arr = {1,2,3,4,5,6,7,8,9};
    reverseArray(arr, d);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}