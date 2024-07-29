#include <iostream>
using namespace std;

// Function to perform addition
float add(float x, float y) {
    return x + y;
}

// Function to perform subtraction
float subtract(float x, float y) {
    return x - y;
}

// Function to perform multiplication
float multiply(float x, float y) {
    return x * y;
}

// Function to perform division
float divide(float x, float y) {
    if (y != 0)
        return x / y;
    else {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}

int main() {
    float num1, num2;
    char operation;

    cout << "Welcome to the Simple Calculator!" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }
    return 0;
}