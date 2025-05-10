#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0, b = 1;
    cout << a << " " << b << " ";

    for (int i = 2; i < N; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    return 0;
}
