#include <iostream>
#include <vector>
using namespace std;
int missingNumbers(vector <int> &arr){
    int Xor1 =0;
    int Xor2 = 0;
    int n = arr.size();
    for (int i = 0; i <= n; i++){
        Xor1 = Xor1 ^ i;
    }
    for (int i = 0; i < n; i++){
        Xor2 = Xor2 ^ arr[i];
    }
    return Xor1 ^ Xor2;
}
int main(){
    vector <int> arr = {0,1,3,4};
    cout << "missing number: " << missingNumbers(arr);
    return 0;
}