#include <iostream>
#include <vector>
using namespace std;
void twoSum2 (vector <int> &arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    while (left < right){
        int sum = arr[left] + arr[right];
        if (sum == target){
            cout << "found" << " ";
            return;
        }
        else if (sum < target){
            left++;
        }
        else {
            right --;
        }
    }
    return;
}
int main(){
    int target = 14;
    vector <int> arr = { 2,5,6,8,11};
    twoSum2(arr,target);
    return 0;
}