#include <iostream>
#include <vector>
using namespace std;
void leftRotatebyD(vector <int> &arr, int d){
    int n = arr.size();
    vector <int> temp(d);
    for ( int i = 0; i < n; i++){
        temp [i] = arr[i];
    }
    for (int i = d; i < n; i++){
        arr [i - d] = arr[i];
    }
    for (int i = 0; i < n; i++){
        arr[ n - d + i] = temp[i];
    }
}
int main(){
    vector <int> arr = {1,2,3,4,5,6,7,8,9};
    int d = 2;
    leftRotatebyD (arr , d);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i]<< " ";
    }
    return 0;
}