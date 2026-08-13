#include <iostream>
#include <vector>
using namespace std;
int largestElement1 (vector <int> &arr){
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    vector <int> arr = {2, 5, 1, 8, 3};
    cout << largestElement1 (arr) << " ";
    return 0;
}