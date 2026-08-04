#include <iostream>
#include <vector>
using namespace std;
void movetoEnd(vector <int> &arr){
    vector <int>  temp;
    for (int i = 0; i < arr.size(); i++){
        if (arr [i] != 0){
            temp.push_back((arr[i]));
        }
    }
    for (int i = 0; i < temp.size(); i++){
        arr[i] = temp[i];
    }
    for (int i = temp.size(); i < arr.size(); i++){
        arr[i] = 0;
    }
}
int main(){
    vector <int> arr = {1,0,0,2,3,4,5,6,0,0,0,7,8,0};
    movetoEnd(arr);
    for (int i = 0; i < arr.size(); i++){
        cout <<arr[i]<< " ";
    }
    return 0;
}