#include <iostream>
#include <vector>
using namespace std;
vector<int> unionArray(vector <int> &arr1, vector<int> &arr2){
    vector <int> ans;
    int i = 0;
    int j = 0;
    while ( i < arr1.size() && j < arr2.size()){
        if (arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else if (arr2[j] < arr1[i]){
            ans.push_back(arr2[j]);
            j++;
        }
        else if (arr1[i] == arr2[j]){
        ans.push_back(arr1[i]);
        i++;
        j++;
    }
    }
    while (j < arr2.size()) {
    ans.push_back(arr2[j]);
    j++;
    }
    while (i < arr1.size()) {
    ans.push_back(arr1[i]);
    i++;
    }
    return ans;
}
int main(){
    vector <int> arr1 = {1,2,3,4};
    vector <int> arr2 = {4,5,6,7};
    vector<int> ans = unionArray(arr1, arr2);
    for (int x : ans) {
    cout << x << " ";
    }
}