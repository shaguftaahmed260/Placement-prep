#include <iostream>
using namespace std;
void pattern1 (){
    for (int i=0; i<=4; i++){
        for (int j=1;j<=5;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    pattern1();
    return 0;
}