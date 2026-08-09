#include <iostream>
#include <vector>
using namespace std;
int singleNumber2(vector <int> arr){
    int XOR = 0;
    for (int i = 0; i < arr.size(); i++){
        XOR = XOR ^ arr[i];
    }
    return XOR;
}
int main(){
    vector <int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 7, 6, 6, 7, 5};
    cout << singleNumber2(arr) << " ";
    return 0;
}