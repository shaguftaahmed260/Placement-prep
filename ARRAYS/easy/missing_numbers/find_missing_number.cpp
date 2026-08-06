#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int missingNumber(vector <int> &arr){
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] != i){
            return i;
        }
    }
    return arr.size();
}
int main(){
    vector <int> arr = { 0,1,3,4,5,6};
    sort(arr.begin(), arr.end());
    cout << "Missing Number: " << missingNumber(arr) << endl;
    return 0;

}
