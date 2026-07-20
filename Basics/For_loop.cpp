#include <iostream>
using namespace std;
void Count (int i){
    for (int n = 5; n >= i ; n--) {
        cout << n <<" " << endl;
    }

}
int main(){
    int i;
    cin >> i;
    Count (i);
    return 0;
}
