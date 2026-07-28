#include <iostream>
using namespace std;
int prime(int n){
    int count = 0;
    for (int i = 1; i <= n ; i++){
        if ( n % i == 0){
            count = count + 1;
        }
    }
    if ( count == 2){
        cout << "prime number";
    }
    else {
        cout << "not a prime number";
    }
}
int main(){
    int n;
    cin >> n;
    prime(n);
    return 0;
}