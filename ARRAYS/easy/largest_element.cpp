#include <iostream>
#include <vector>
using namespace std;
int largestElement(vector <int> &arr){
    int largest = arr[0];
    for ( int i = 1; i < arr.size(); i ++){
        if ( arr[i]> largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    vector <int> arr = { 3, 5, 0, 10, 50, 4};
    cout << "largest element is : " << largestElement (arr);
    return 0;
}