#include <iostream>
#include <vector>
using namespace std;
int maxOnes(vector <int> &arr){
    int count = 0; 
    int maximum = 0;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == 1){
            count ++;
        }
        else if (arr[i] != 1){
            count = 0;
        }
        maximum = max (count , maximum);
    }
    return maximum;
}
int main(){
    vector <int> arr = { 1,1,0,1,1,1,0,1};
    cout << maxOnes(arr);
    return 0;
}