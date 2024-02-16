#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string color;
public:
    Shape(string color) : color(color) {}
    void draw() {
        cout << "Drawing a " << color << " ";
    }
    virtual double area( ) = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(string color, double radius) : Shape(color), radius(radius) {}
    void draw() {
        Shape::draw();
        cout << "circle." << " ";
    }
    double area() override {
        return 3.14*radius*radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(string color, double width, double height) : Shape(color), width(width), height(height) {}
    void draw() {
        Shape::draw();
        cout << "rectangle." << " ";
    }
    double area() override {
        return width * height;
    }
};

void printArea(Shape* shape) {
    cout << "The area of the shape is " << shape->area() << endl;
}

int main() {
    Circle circle("white", 2.5);
    circle.draw();
    printArea(&circle);
    
    Rectangle rectangle("black", 12, 13.2);
    rectangle.draw();
    printArea(&rectangle);
    
    return 0;
}
