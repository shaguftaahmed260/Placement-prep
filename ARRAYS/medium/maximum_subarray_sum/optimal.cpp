#include <iostream>
#include <vector>
using namespace std;
int maximumSubarray2 (vector <int> &arr){
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i< arr.size(); i++){
        sum += arr[i];
        maxSum = max(sum,maxSum);

        if (sum < 0){
            sum = 0;
        }
    }
    return maxSum;
}
int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum Subarray Sum: " << maximumSubarray2(arr) << " ";

    return 0;
}
