#include <iostream>
#include <vector>
using namespace std;
bool sortedArray (vector <int> &arr){
    for ( int i = 1; i < arr.size(); i++){
        if ( arr[i] >= arr [i - 1]){

        }
        else {
            return false;
        }
    }
    return true;
}
int main(){
    vector <int> arr = {1, 2, 4, 5, 7, 6};
    if (sortedArray(arr)){
        cout << "this is a sorted array";
    }
    else {
        cout << "not a sorted array";
    }
    return 0;
}