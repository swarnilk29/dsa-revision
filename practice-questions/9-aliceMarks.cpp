#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X >= 2 * Y) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
