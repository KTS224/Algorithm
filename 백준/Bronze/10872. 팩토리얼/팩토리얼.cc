#include <iostream>
using namespace std;

int fact(int n) {
    if (n != 0) {
        return n * fact(n-1);
    } else {
        return 1;
    }
}


int main() {
    int a;
    cin >> a;
    cout << fact(a);
    return 0;
}
