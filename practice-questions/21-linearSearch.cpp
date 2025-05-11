#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> x;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}
