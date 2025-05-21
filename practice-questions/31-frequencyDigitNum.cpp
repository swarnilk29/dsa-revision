// Count Frequency of a Digit in a Number
#include <iostream>
using namespace std;

int main() {
    int num, digit, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter digit to count: ";
    cin >> digit;

    while (num > 0) {
        int d = num % 10;
        if (d == digit)
            count++;
        num /= 10;
    }

    cout << "Digit " << digit << " occurs " << count << " times." << endl;
    return 0;
}
