#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int highestOccur(vector<int>& arr) {

    int maxElement = 0;
    int maxFreq = 0;

    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
        mp[arr[i]]++;
    }

    for (auto it : mp) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }

        cout << it.first << "-" << it.second << endl;
    }

    return maxElement;
}

int main() {

    vector<int> arr = {1, 1, 2, 2, 2, 3, 3, 4};

    cout << "Highest occurring element: " << highestOccur(arr) << " ";

    return 0;
}