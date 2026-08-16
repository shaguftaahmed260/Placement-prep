#include <iostream>
#include <vector>
using namespace std;
int maximumSubarray (vector<int> &arr){
    int maxSum = INT_MIN;
    for (int i = 0; i < arr.size(); i++){
        for (int j = i; j < arr.size(); j++){
            int sum = 0; 
            for (int k = i; k <= j;k++){
                sum += arr[k];
            }
            maxSum = max(sum,maxSum);
        }
    }
    return maxSum;
}
int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum Subarray Sum: " << maximumSubarray(arr)<<" ";

    return 0;
}