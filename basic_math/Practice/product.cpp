#include <iostream>
using namespace std;
int Multi(int n){
    int product = 1;
    while (n > 0){
        int lastdigit = n % 10;
        product = product * lastdigit;
        n = n / 10;
    }
    return product;
}
int main (){
    int n;
    cin >> n;
    cout << Multi(n);;
    return 0;
}