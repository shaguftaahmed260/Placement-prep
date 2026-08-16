#include <iostream>
#include <vector>
using namespace std;
int maximumSubarray1 (vector <int> &arr){
    int maxSum = INT_MIN;
    for (int i = 0; i < arr.size(); i++){
        int sum = 0;
        for (int j = i; j < arr.size(); j++){
            sum += arr[j];
            maxSum = max(maxSum,sum);
        }
    }
    return maxSum;
}
int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum Subarray Sum: " << maximumSubarray1(arr) << " " ;

    return 0;
}