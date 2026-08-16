#include <iostream>
#include <vector>
using namespace std;
int majorityElement (vector <int> &arr){
    int count = 0;
    int el;
    for (int i = 0; i < arr.size(); i++){
        if (count == 0){
            el = arr[i];
        }
        if(arr[i] == el){
            count++;
        }
        else if (arr[i] != el){
            count --;
        }
    }
    int count2 = 0;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == el){
            count2++;
        }
    }
    if (count2 > arr.size() / 2){
        return el;
    }
    return -1;
}
int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority Element: " << majorityElement(arr)<< " ";

    return 0;
}