#include <iostream>
#include <vector>
using namespace std;
int missingNumber1(vector <int> &arr){
    int n = arr.size();
    vector <int> hash(n + 1, 0);
    for (int i = 0; i < n; i++){
        hash [arr[i]] = 1;
    }
    for (int i = 0; i <= n; i++){
        if (hash[i] == 0){
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {3, 0, 1};

    cout << "Missing Number: " << missingNumber1(arr)<< " ";

    return 0;
}