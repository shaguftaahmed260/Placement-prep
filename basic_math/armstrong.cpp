#include <iostream>
#include <cmath>
using namespace std;
int armValue (int n){
    int dupe = n;
    int temp = n;
    int sum = 0;
    int d = 0;
    while (temp > 0){
        d++;
        temp = temp / 10;
    }
    while (n > 0){
        int lastdigit = n % 10;
        sum = sum + pow(lastdigit,d);
        n = n /10;
    }
    if ( sum == dupe){
        cout << "is armstrong number";
    }
    else {
        cout << "not armstrong number";
    }
}
int main(){
    int n;
    cin >> n;
    armValue(n);
    return 0;
}