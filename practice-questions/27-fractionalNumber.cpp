#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial = " << fact;
    return 0;
}
