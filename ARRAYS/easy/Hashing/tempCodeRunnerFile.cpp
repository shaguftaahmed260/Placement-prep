#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int maxElement = 0;
int maxFreq = 0;
int highestOccur (vector <int> &arr){
    unordered_map <int,int> mp;
    for (int i = 0; i < arr.size(); i++){
        mp[arr[i]]++;
    }

    for (auto it : mp){
        if (it.second > maxFreq){
            maxFreq = it.second;
            maxElement = it.first;
        }
        cout << it.first << "-" << it.second ;
    }
    return maxElement;
}
int main(){
    vector <int> arr = {1,1,2,2,2,3,3,4};
    for (int i = 0; i < arr.size(); i++){
        cout << highestOccur(arr) << " ";
    }
    return 0;
}