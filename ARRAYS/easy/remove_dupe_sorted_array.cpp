#include <iostream>
#include <vector>
using namespace std;
int sortedDuplicate(vector <int> &arr){
    int i = 0;
    for ( int j = 1; j < arr.size(); j++){
        if ( arr [i] != arr [j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main(){
    vector <int> arr = { 1,2,3,3,3,4,4,5,6,6,7,8};
    int k = sortedDuplicate(arr);
    for (int i = 0; i < k; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}