#include <iostream>
using namespace std;
int Copy (int low, int high){
    int sum = 0;
    for (int i= low; i<= high ; i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int low = 3;
    int high = 10;

    cout << Copy (low,high);
    return 0;
}