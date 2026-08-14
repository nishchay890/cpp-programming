#include <iostream>
using namespace std;

class fraction
{
public:
    int n, d;
    void input()
    {
        cin >> n >> d;
    }
    void display()
    {
        cout << n << "/" << d;
    }
};

int main()
{
    fraction f1, f2, add, sub;    
    cout << "Enter the first fraction number (numerator denominator): ";
    f1.input();    
    cout << "Enter the second fraction number (numerator denominator): ";
    f2.input(); // Fixed typo 'inut()' to 'input()'

    add.n = f1.n * f2.d + f2.n * f1.d;
    add.d = f1.d * f2.d;
    cout << "Addition = ";
    add.display();
    
    sub.n = f1.n * f2.d - f2.n * f1.d;
    sub.d = f1.d * f2.d;
    cout << "\nSubtraction = ";
    sub.display();
    cout << endl;
    
    return 0;
}
