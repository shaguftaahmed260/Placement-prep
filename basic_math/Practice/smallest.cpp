#include <iostream>
using namespace std;
int Practice3(int n){
    int smallest = 9;
    while (n > 0){
        int lastdigit = n % 10;
        if ( lastdigit < smallest){
            smallest = lastdigit;
        }
        n = n / 10;
    }
    return smallest;
}
int main(){
    int n;
    cout << "enter number";
    cin >> n;
    cout << Practice3(n);
    return 0;

}