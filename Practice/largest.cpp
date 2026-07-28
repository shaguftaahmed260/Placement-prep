#include <iostream>
using namespace std;
int practice (int n){
    int largest = 0;
    while (n > 0){
        int lastdigit = n % 10;
        if (lastdigit > largest){
            largest = lastdigit;
        }
        n = n / 10;
    }
    return largest;
}
int main(){
    int n;
    cout << "enter number";
    cin >> n;
    cout << practice(n);
    return 0;
}