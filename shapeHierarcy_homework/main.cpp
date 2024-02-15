
#include <iostream>

class Shape {
public:
    void draw( ){
        std::cout << "Draws the shape: " ;
    }
};

class Circle: public Shape {
public:
    void draw( ){
        std::cout << "circle" << std::endl;
    }
};

class Rectangle : public Shape{
public:
    void draw( ){
        std::cout << "rectangle" << std::endl;
    }
};

int main() {
    Shape shape1;
    Circle circle1;
    Rectangle rectangle1;
  
    Shape* shapePtr;
    Circle* circlePtr;

    shapePtr = &shape1;
    shapePtr->draw();

    circlePtr = &circle1;
    circlePtr->draw();
    
    return 0;
}
