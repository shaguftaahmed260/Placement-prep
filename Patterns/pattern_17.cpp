#include <iostream>
using namespace std;
void pattern17(int n){
    for (int i = 1; i <= n; i++){
        char ch = 'A';
        for (int j = 1; j <= n - i ; j++){
            cout << " ";
        }
        for (int j = 1; j <= i; j ++){
            cout << ch << " ";
            ch ++;
        }
        ch --;
        ch --;
        for (int j = 1; j <= i - 1; j++){
            cout << ch << " ";
            ch --;
        }
        cout << endl;

    }
}
int main(){
    int n;
    cin >> n;
    pattern17(n);
    return 0;
}