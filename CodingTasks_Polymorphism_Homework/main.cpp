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
private:
    double radius;
public:
    void draw( ) {
        cout << "Drawing a white circle." << endl;
    }
     void area (double radius){
        cout << radius*radius*3.14 << endl;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    void draw( ) {
        cout << "Drawing a black rectangle." << endl;
    }
    void area(double width, double height) {
        cout << width * height << endl;
    }
};

int main() {
    
    Circle* circle1 = nullptr;
    circle1->area(2.5);
    
    Rectangle* rectangle1 = nullptr;
    rectangle1->area(12, 13.2);
    
    return 0;
}
