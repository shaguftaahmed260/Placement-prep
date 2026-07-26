#include <iostream>
using namespace std;
int highest (int a , int b){
    while (a != b){
        if ( a > b){
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
}
int main(){
    int a;
    cout << "enter value of a : ";
    cin >> a;
    int b;
    cout << "enter value of b : ";
    cin >> b;
    cout << highest(a,b);
    return 0;
}