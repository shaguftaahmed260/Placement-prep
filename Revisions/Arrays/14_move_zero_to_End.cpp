#include <iostream>
#include <vector>
using namespace std;
void movetoEnd(vector <int> &arr){
    int j = -1;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == 0){
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < arr.size(); i ++){
        if (arr[i] != 0){
            swap(arr[i],arr[j]);
            j ++;
        }
    }
}
int main(){
    vector <int> arr = {1,0,2,3,4,0,7,8,0,9,0,6,7};
    movetoEnd(arr);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}