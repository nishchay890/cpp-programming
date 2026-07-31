#include <iostream>
using namespace std;

int main() {
    double number;

    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        cout << number << " is a positive number." << endl;
    } 
    else if (number < 0) {
        cout << number << " is a negative number." << endl;
    } 
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

