#include <iostream>
#include <vector>
using namespace std;
vector <int> reArrange (vector <int> &arr){
    vector<int> ans(arr.size());
    int positive = 0;
    int negative = 1;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] > 0){
            ans[positive] = arr[i];
            positive += 2;
        }
        else {
            ans[negative] = arr[i];
            negative += 2;
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {1, -2, 4, -3, 9, -7};
    vector<int> ans = reArrange(arr);
    cout << "Rearranged Array: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}