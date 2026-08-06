#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector <int> findUnion(vector <int> &arr1, vector <int> &arr2){
    set <int> st;
    for (int i = 0; i < arr1.size();i++){
        st.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++){
        st.insert(arr2[i]);
    }
    vector <int> ans;
    for (auto it : st){
        ans.push_back(it);
    }
    return ans;
}
int main(){
    vector <int> arr1 = {1,2,3,4,5,6};
    vector <int> arr2 = {2,3,4,5,7,8};
    vector <int> ans = findUnion(arr1, arr2);
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i]<< " ";
    }
    return 0;
}