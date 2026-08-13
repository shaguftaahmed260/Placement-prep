#include <iostream>
#include <vector>
using namespace std;
int linearSearch (vector <int> &arr, int d){
    int i = 0;
    for (i = 0; i < arr.size(); i++){
        if (arr[i] == d){
            return i;
        }
    }
    return -1;
}
int main(){
    int d;
    d = 40;
    vector <int> arr = {10,20,30,40,50};
    cout << linearSearch(arr,d);
    return 0;
}