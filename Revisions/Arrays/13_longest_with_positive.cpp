#include <iostream>
#include <vector>
using namespace std;
int longestSub(vector<int> &arr, int k){
    int left = 0;
    int right = 0;
    int maxLen = 0;
    int sum = 0;
    for (right = 0; right < arr.size(); right++){
        sum += arr[right];
    while (sum > k){
        sum -= arr[left];
        left++;
    }
    int n = right - left + 1;
    if (sum == k){
        maxLen = max(maxLen,n );
    }
    }
    return maxLen;
}
int main(){
    int k;
    k = 3;
    vector <int> arr = { 1,1,1,2,2,1,1};
    cout << "longest subarray is : " << longestSub(arr,k)<< " ";
    return 0;
}