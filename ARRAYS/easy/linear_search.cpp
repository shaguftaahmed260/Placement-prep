#include <iostream>
#include <vector>
using namespace std;
int linearSearch(vector <int> &arr, int num){
    for (int i = 0; i < arr.size(); i++){
        if ( arr[i] == num){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {2, 5, 9, 7, 4};
    int num = 7;
    cout << linearSearch(arr, num);
    return 0;
}