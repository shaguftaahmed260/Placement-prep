#include <iostream>
#include <vector>
using namespace std;
int longestSeq (vector <int> &arr){
    int n = arr.size();
    int count = 0;
    int lastNumber = INT_MIN;
    int longest = 0;
    sort (arr.begin(), arr.end());
    for (int i = 0; i < n; i++){
        if (arr[i] == lastNumber + 1){
            count ++;
            lastNumber = arr[i];
        }
        else if (arr[i] == lastNumber){

        }
        else if (arr[i] != lastNumber + 1){
            count = 1;
            lastNumber = arr[i];
        }
        longest = max(longest, count);
    }
    return longest;
}
int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    cout << "Longest Consecutive Sequence: " << longestSeq(arr)<< " ";
    return 0;
}