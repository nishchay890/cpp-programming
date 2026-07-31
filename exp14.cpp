#include <iostream>
using namespace std;

int main() {
    int num;
    int range;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Enter the range up to which you want the table: ";
    cin >> range;

    cout << "\nMultiplication Table for " << num << ":\n";

    for (int i = 1; i <= range; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}

