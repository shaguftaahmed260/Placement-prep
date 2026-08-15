#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector <int> twoSum1(vector <int> &arr, int target){
    unordered_map <int,int> mpp;
    for (int i = 0; i < arr.size(); i++){
        int required = target - arr[i];
        if (mpp.find(required)) != mpp.end()){
            return {mpp[required], i};
        }
        mpp[arr[i]]  = i;
    }
    return {};
}
int main() {
    int target = 14;
    vector<int> arr = {2, 6, 5, 8, 11};
    vector<int> ans = twoSum1(arr, target);
    cout << ans[0] << " " << ans[1];
    return 0;
}