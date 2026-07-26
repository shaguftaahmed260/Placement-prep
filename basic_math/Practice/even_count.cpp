#include <iostream>
using namespace std;
int practice4(int n){
    int count = 0;
    while (n > 0){
        int lastdigit = n % 10;
        if ( lastdigit % 2 == 0){
            count ++;
        }
        n = n / 10;
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    cout << practice4(n);
    return 0;
}