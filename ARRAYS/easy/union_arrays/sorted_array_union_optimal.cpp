#include <iostream>
#include <vector>
using namespace std;
vector <int> sortedArray(vector <int> arr1, vector <int> arr2){
    vector <int> ans;
    int i = 0;
    int j = 0;
    while ( i < arr1.size() && j < arr2.size()){
        if ( arr1[i] < arr2[j]){
            if (ans.empty() || ans.back() != arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i] > arr2[j]){
            if (ans.empty() || ans.back() != arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
        else if (arr1[i] == arr2[j]){
            if (ans.empty() || ans.back() !=  arr2[j]){
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while ( i < arr1.size()){
        if (ans.empty() || ans.back() != arr1[i])
    {
        ans.push_back(arr1[i]);
    }
    i++;
}
while (j < arr2.size()){
    if (ans.empty() || ans.back() != arr2[j])
    {
        ans.push_back(arr2[j]);
    }

    j++;
}
return ans;
}
int main(){
    vector <int> arr1 = { 1,2,3,4,5,6,7};
    vector <int> arr2 = { 2,3,4,5,8,9};
    vector <int> ans = sortedArray(arr1, arr2);
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
