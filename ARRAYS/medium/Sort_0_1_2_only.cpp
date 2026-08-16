#include <iostream>
#include <vector>
using namespace std;
void sortNumbers( vector <int> &arr, int n){
    int low = 0; int mid = 0; int high = n -1;
    while (mid <= high){
        if (arr[mid] == 0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid ++;
        }
        else if(arr[mid] == 2){
            swap (arr[mid],arr[high]);
            high --;
        }
    }
}
int main(){
    int n = 6;
    vector <int> arr = { 1,2,0,1,1,2};
    sortNumbers(arr,n);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}