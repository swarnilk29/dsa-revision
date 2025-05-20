#include <iostream>
using namespace std;

int main() {
    int num, evenSum = 0, oddSum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;

        num /= 10;
    }

    cout << "Sum of even digits: " << evenSum << endl;
    cout << "Sum of odd digits: " << oddSum << endl;
    return 0;
}
