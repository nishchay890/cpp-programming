#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore(); // Clear input buffer
        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.input();
    emp.display();

    return 0;
}
