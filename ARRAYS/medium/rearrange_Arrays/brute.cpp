#include <iostream>
#include <vector>
using namespace std;
vector<int> rearrange(vector<int> &arr){
    int n = arr.size();
    vector <int> pos;
    vector <int> neg;
    for (int i = 0; i < n;i++){
        if (arr[i] > 0){
            pos.push_back(arr[i]);
        }
        else {
            neg.push_back(arr[i]);
        }
    }
        vector <int> ans;
        for (int i = 0; i < pos.size(); i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
    return ans;
}
int main(){
    vector <int> arr = { 1,-2,4,-3,9,-7};
    vector<int> ans = rearrange(arr);
    for (int i = 0; i < arr.size(); i++){
        cout << ans[i] << " ";
    }
}