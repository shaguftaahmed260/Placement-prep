#include <iostream>
#include <vector>
using namespace std;
int missingNumber2(vector <int> &arr){
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i <= arr.size(); i++){
        xor1 = xor1 ^ i;
    }
    for (int i = 0; i < arr.size(); i++){
        xor2 = xor2 ^ arr[i];
    }
    return xor1 ^ xor2;
}
int main()
{
    vector<int> arr = {3, 0, 1};

    cout << "Missing Number: " << missingNumber2(arr);

    return 0;
}