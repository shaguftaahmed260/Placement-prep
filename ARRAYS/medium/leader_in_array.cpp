#include <iostream>
#include <vector>
using namespace std;
vector <int> leaders(vector <int> &arr){
    int maxx = INT_MIN;
    int n = arr.size();
    vector <int> ans;
    for (int i = n - 1; i >= 0; i--){
        if (arr[i] >= maxx){
            ans.push_back(arr[i]);
        }
        maxx = max(maxx,arr[i]);
    }
    return ans;
}
int main() {
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> ans = leaders(arr);
    cout << "Leaders: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}