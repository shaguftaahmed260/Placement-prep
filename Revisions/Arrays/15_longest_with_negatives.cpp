#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
long long subArray (vector <int> &arr, int k){
    unordered_map<long long, int> mp;
    long long sum = 0;
    long long maxlen = 0;
    for (int i = 0; i < arr.size(); i++){
        sum += arr[i];

        if (sum == k){
            maxlen = i + 1;
        }
        if (mp.find(sum - k) != mp.end()){
            long long len = i - mp[sum - k];
            maxlen = max( maxlen, len);
        }
        if (mp.find(sum) == mp.end()){
            mp [sum] = i;
        }
    }
    return maxlen;
}
int main(){
    int k;
    k = 3;
    vector <int> arr = { 1,1,1,4,5,1,1,1,1};
    cout << subArray(arr,k) <<" ";
    return 0;
}