#include <iostream>
using namespace std;
int gcd(int a , int b){
    while ( a != b){
        if ( a > b){
            a = a - b;
        }
        else {
            b = b - a;
        }
        a = b;
    }
    return a;
}
int lcm (int a , int b){
    int gcdValue = gcd (a,b);
    int lcmValue = (a * b) / gcdValue;
    return lcmValue;
}
int main(){
    int a ;
    cin >> a;
    int b;
    cin >> b;
    cout << lcm(a,b);
    return 0;
}