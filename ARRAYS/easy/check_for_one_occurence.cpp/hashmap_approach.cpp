#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int singleNumber(vector<int>& nums) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }

    for (auto it : mp) {
        if (it.second == 1) {
            return it.first;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {1,1,3,4,4,5,5};

    cout << singleNumber(nums);

    return 0;
}