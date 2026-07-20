#include <iostream>
using namespace std;
void Practice (int n) {
    for (int i = 1; i<=n; i++){
        if (i % 2 == 0){
            cout << i << " ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    Practice (n);
    return 0;
}