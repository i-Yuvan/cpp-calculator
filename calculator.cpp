#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    char again = 'y';

    cout << "=== C++ Calculator ===\n";

    while (again == 'y' || again == 'Y') {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> b;

        switch (op) {
            case '+':
                cout << "Result: " << a + b << '\n';
                break;
            case '-':
                cout << "Result: " << a - b << '\n';
                break;
            case '*':
                cout << "Result: " << a * b << '\n';
                break;
            case '/':
                if (b == 0)
                    cout << "Error: Cannot divide by zero.\n";
                else
                    cout << "Result: " << a / b << '\n';
                break;
            default:
                cout << "Invalid operator.\n";
        }

        cout << "Calculate again? (y/n): ";
        cin >> again;
    }

    cout << "Goodbye!\n";
    return 0;
}
