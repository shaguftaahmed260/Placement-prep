#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 2, 3, 1, 4, 2};

    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
        mp[arr[i]]++;
    }

    for (auto it : mp) {
        cout << it.first << " → " << it.second << endl;
    }

    return 0;
}
