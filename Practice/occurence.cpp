#include <iostream>
using namespace std;
int occur (int n){
    int d = 3 ;
    int count = 0;
    while (n > 0){
        int lastdigit = n % 10;
        if (lastdigit == d){
            count = count + 1;
        }
        n = n / 10;
    }
    return count;
}
int main (){
    int n;
    cout << "enter number : ";
    cin >> n;
    cout << occur(n);
    return 0;
}