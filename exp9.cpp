#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "The largest number is: " << num1 << endl;
    } 
    else if (num2 > num1) {
        cout << "The largest number is: " << num2 << endl;
    } 
    else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}

