#include <iostream>
using namespace std;
int Num (int n){
    int count = 0;
    while (n > 0){
        count = count + 1;
        n = n / 10;
    }
    return count;
}

int main() {
	int n;
	cin >> n;
	Num(n);
	cout << Num(n);
	return 0;

}
