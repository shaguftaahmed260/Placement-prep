#include <iostream>
using namespace std;
bool findprime (int a , int b){
    while ( a != b){
        if ( a > b){
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a == 1;
}
int main (){
    int a;
    int b;
    cin >> a;
    cin >> b;
    if (findprime (a,b) ){
        cout << "it is co-prime";
    }
    else {
        cout << "not a co-prime";
    }
    return 0;
}
