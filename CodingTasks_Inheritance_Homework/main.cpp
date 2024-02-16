#include <iostream>
#include <string>
using namespace std;

class Shape{
protected:
    string color;
public:
    void draw( );
};

class Circle : public Shape {
public:
    void draw( ) {
        cout << "Drawing a white circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw( ) {
        cout << "Drawing a black rectangle." << endl;
    }
};

int main() {
    
    Circle circle;
    circle.draw();
    
    Rectangle rectangle;
    rectangle.draw();
    
    return 0;
}
