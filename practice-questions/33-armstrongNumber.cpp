//Check if a Number is an Armstrong Number

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, sum = 0;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    original = num;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }

    if (sum == original)
        cout << "Armstrong number" << endl;
    else
        cout << "Not an Armstrong number" << endl;

    return 0;
}
