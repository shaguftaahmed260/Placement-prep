#include <iostream>
#include <vector>
using namespace std;
int missingPair(vector <int> &arr){
    int Xor1 = 0;
    for (int i = 0; i < arr.size(); i++){
        Xor1 = Xor1 ^ arr[i];
    }
    return Xor1;
}
int main(){
    vector <int> arr = { 1,1,2,2,3,4,4};
    cout << "the missing pair is : " << missingPair(arr);
    return 0;
}