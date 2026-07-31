#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

cout << "Enter two number:";
cin >> a >> b;

temp = a;
a = b;
b = temp;

cout << "After swapping: " << endl;
cout << "a = " << a << endl;
cout << "b = " << b ;

return 0;
}
