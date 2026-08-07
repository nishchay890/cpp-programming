#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    void input() {
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}
