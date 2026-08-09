#include <iostream>
#include <vector>
using namespace std;
int subarray1(vector <int> arr, int k){
    int maxi = 0;
    for (int i = 0; i < arr.size(); i++){
        int sum = 0;
        for (int j = i; j < arr.size(); j++){
            sum += arr[j];

            if (sum == k){
                int length = j - i + 1;
                maxi = max( length, maxi);
            }
        }
    }
    return maxi;
}
int main(){
    int k;
    cin >> k;
    vector <int> arr = { 1,1,1,3,4,1,1,1};
    cout << subarray1(arr , k) << " ";
}