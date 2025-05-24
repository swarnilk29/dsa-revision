#include <iostream>
using namespace std;

int main() {
    char op;
    int a, b;

    while (true) {
        cout << "\nEnter operation (+, -, *, /) or 'q' to quit: ";
        cin >> op;

        if (op == 'q') break;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (op) {
            case '+': cout << "Result: " << a + b; break;
            case '-': cout << "Result: " << a - b; break;
            case '*': cout << "Result: " << a * b; break;
            case '/':
                if (b != 0)
                    cout << "Result: " << a / b;
                else
                    cout << "Cannot divide by zero";
                break;
            default: cout << "Invalid operation!";
        }
    }

    return 0;
}
