#include <iostream>
#include <vector>
using namespace std;
int secondLargest1 (vector <int> &arr){
    int largest = arr[0];
    int sLargest = INT_MIN;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sLargest && arr[i] < largest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int main(){
    vector <int> arr = {2, 5, 1, 8, 3};
    cout << secondLargest1(arr) << endl; 
    return 0;
}
