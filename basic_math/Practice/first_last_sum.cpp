#include <iostream>
using namespace std;
int practice5 (int n){
    int sum = 0;
    int lastdigit = n % 10;
    while (n >= 10){
        n = n / 10;
    }
    int firstdigit = n;
    sum = lastdigit + firstdigit;
    return sum;
}
int main(){
    int n;
    cin >> n;
    cout << practice5(n);
    return 0;
}