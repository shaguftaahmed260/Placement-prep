#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int secondLargestElement(vector <int> &arr) {
    int largest = arr[0];
    int secondLargest = INT_MIN;
    for (int i = 1; i < arr.size() ; i ++){
        if (arr [i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if ( arr [i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main(){
    vector <int> arr = { 3, 5, 7, 9, 13, 12};
    cout << "the second largest element is : " << secondLargestElement(arr);
    return 0;
}