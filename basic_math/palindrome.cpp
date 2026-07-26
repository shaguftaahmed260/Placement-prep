#include <iostream>
using namespace std;
bool pal(int n){
    int org = n;
    int rev = 0;
    while (n > 0){
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n = n / 10;
    }
    if (org == rev){
        return true;
    }
    else {
        return false;
    }
    return rev;
}
int main(){
    int n;
    cin >> n;
    if (pal(n)){
        cout << "it is a palindrome";
    }
    else {
        cout << "not a palindrome";
    }
    return 0;
}