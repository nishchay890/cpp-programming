#include <iostream>
#include <cmath> // For M_PI

// Base Class
class Shape {
public:
    // Pure virtual function makes Shape an abstract base class
    virtual double area() const = 0;

    // Virtual destructor ensures proper cleanup of derived objects
    virtual ~Shape() {}
};

// Derived Class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Overriding the area function for a circle (π * r^2)
    double area() const override {
        return M_PI * radius * radius;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Overriding the area function for a rectangle (w * h)
    double area() const override {
        return width * height;
    }
};

int main() {
    // Create instances of derived classes
    Circle myCircle(5.0);
    Rectangle myRectangle(4.0, 6.0);

    // Use base class pointers to demonstrate runtime polymorphism
    Shape* shape1 = &myCircle;
    Shape* shape2 = &myRectangle;

    // Output the areas dynamically
    std::cout << "Area of the Circle (radius 5): " << shape1->area() << std::endl;
    std::cout << "Area of the Rectangle (4x6): " << shape2->area() << std::endl;

    return 0;
}
