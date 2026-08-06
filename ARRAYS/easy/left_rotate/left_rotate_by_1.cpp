#include <iostream>
#include <vector>
using namespace std;
void leftRotate(vector <int> &arr){
    int temp = arr[0];
    int n = arr.size();
    for (int i = 1; i < n - 1; i++){
        arr [i - 1] = arr [i];
    }
    arr [n - 1] = temp;
}
int main(){
    vector <int> arr = {1, 2, 3, 4, 5, 6,7};
    leftRotate(arr);
    cout << "Rotated array is : ";
    for ( int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}