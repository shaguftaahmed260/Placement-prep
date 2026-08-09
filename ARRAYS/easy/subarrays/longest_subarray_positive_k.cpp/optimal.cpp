#include <iostream>
#include <vector>
using namespace std;
int longestSubarray (vector <int> &arr, int k){
    int left = 0;
    int right = 0;
    int maxLen = 0;
    int sum = 0;
    for (int right = 0; right < arr.size(); right++){
        sum += arr[right];

        while (sum > k){
            sum -= arr[left];
            left ++;
        }
        if (sum == k){
            maxLen = max (maxLen, right - left + 1);
        }
    }
    return maxLen;
}
int main(){
    vector <int> arr = {1,1,1,1,2,3,4,1,2,1,1,1,1};
    int k;
    k = 4;
    cout << longestSubarray(arr,k) << " ";
    return 0;
}