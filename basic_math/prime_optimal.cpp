#include <iostream>
using namespace std;
void optimal(int n){
    for ( int i = 2; i * i <= n; i++){
        if ( n % i == 0){
            cout << "not prime"<< " ";
            return;
        }
    }
    cout << "prime";
}
int main(){
    int n;
    cin >> n;
    optimal(n);
    return 0;
}