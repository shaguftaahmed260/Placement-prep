#include <iostream>
using namespace std;
int Run (int low, int high){
    int sum = 0;
    for (int i= low; i<= high; i++) {
        sum = sum +i;
    }
    return sum;
}
int main(){
    int low;
    cin >> low;
    int high;
    cin >> high;
    
    cout << Run (low,high);
    return 0;
}
