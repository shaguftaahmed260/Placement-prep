#include <iostream>
#include <vector>
using namespace std;
void printmaximumSubarray2 (vector <int> &arr){
    int maxSum = INT_MIN;
    int sum = 0;
    int start = 0;
    int ansStart = 0;
    int ansEnd = 0;
    for (int i = 0; i< arr.size(); i++){
        sum += arr[i];

        if ( sum > maxSum){
            maxSum = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0){
            sum = 0;
            start = i + 1;
        }
    }
    cout << "Maximum Sum: " << maxSum << endl;
    cout << "Maximum Subarray: ";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    printmaximumSubarray2(arr);
    return 0;
}
