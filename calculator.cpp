#include <iostream>
using namespace std;

int main() {
    while (true) {
        double num1, num2;
        cout << "Enter first number: ";
        if (!(cin >> num1)) {
            cout << "Invalid input. Exiting.\n";
            return 1;
        }

        cout << "Choose an operator to perform calculation (+, -, *, /): ";
        char op;
        cin >> op;

        cout << "Enter second number: ";
        if (!(cin >> num2)) {
            cout << "Invalid input. Exiting.\n";
            return 1;
        }

        double result = 0;
        bool valid = true;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 == 0.0) {
                    cout << "Error: Division by zero is not allowed.\n";
                    valid = false;
                } else {
                    result = num1 / num2;
                }
                break;
            default:
                cout << "Invalid operator!\n";
                valid = false;
                break;
        }

        if (valid) {
            cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        char choice;
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    return 0;
}
