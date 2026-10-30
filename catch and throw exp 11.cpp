#include <iostream>
#include <exception>
#include <string>

// 1. Custom Exception Class for Invalid Age
class InvalidAgeException : public std::exception {
private:
    std::string message;
public:
    // Constructor
    InvalidAgeException(const std::string& msg) : message(msg) {}

    // Overriding the what() method to return our custom error message
    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};

// 2. Person Class with Age Validation
class Person {
private:
    std::string name;
    int age;

public:
    Person(std::string name, int age) {
        this->name = name;
        setAge(age);
    }

    void setAge(int age) {
        if (age < 0 || age > 120) {
            // Throwing the custom InvalidAgeException
            throw InvalidAgeException("Invalid age (" + std::to_string(age) + "). Age must be between 0 and 120.");
        }
        this->age = age;
    }

    void displayInfo() const {
        std::cout << "Person Name: " << name << ", Age: " << age << std::endl;
    }
};

// 3. Main Function to Test Exceptions
int main() {
    // Test 1: Handling InvalidAgeException via Person class
    std::cout << "--- Testing Person Age Validation ---\n";
    try {
        // Trying an invalid age to trigger the custom exception
        Person p1("Alice", -5);
        p1.displayInfo();
    } 
    catch (const InvalidAgeException& e) {
        std::cout << "Caught Custom Exception: " << e.what() << std::endl;
    }

    try {
        // Valid person object
        Person p2("Bob", 25);
        p2.displayInfo();
    } 
    catch (const InvalidAgeException& e) {
        std::cout << "Caught Custom Exception: " << e.what() << std::endl;
    }

    // Test 2: Handling Division by Zero Exception
    // Note: C++ built-in primitive division by zero does NOT throw a runtime exception automatically like Java.
    // We must check the condition and explicitly throw a standard exception.
    std::cout << "\n--- Testing Division by Zero ---\n";
    try {
        int numerator = 10;
        int denominator = 0;

        if (denominator == 0) {
            // Explicitly throw standard runtime_error for division by zero
            throw std::runtime_error("Division by zero is not allowed.");
        }

        int result = numerator / denominator;
        std::cout << "Result: " << result << std::endl;
    } 
    catch (const std::runtime_error& e) {
        std::cout << "Caught Runtime Exception: " << e.what() << std::endl;
    }

    std::cout << "\nProgram execution completed safely." << std::endl;
    return 0;
}
