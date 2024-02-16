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
};

class Circle : public Shape {
public:
    Circle(string color) : Shape(color) {}
    void draw() {
        Shape::draw();
        cout << "circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(string color) : Shape(color) {}
    void draw() {
        Shape::draw();
        cout << "rectangle." << endl;
    }
};

int main() {
    Circle circle("black");
    circle.draw();

    Rectangle rectangle("white");
    rectangle.draw();

    return 0;
}
