// Print Fibonacci Series up to N terms

#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, count = 0;
    cout << "Enter number of terms: ";
    cin >> n;

    while (count < n) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
        count++;
    }

    cout << endl;
    return 0;
}
