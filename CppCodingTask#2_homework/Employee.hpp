#ifndef Employee_hpp
#define Employee_hpp
#include <iostream>
#include <stdio.h>
#include <string>

class Employee {
private:
    std::string name;
    std::string id;
    std::string position;
public:
    Employee(std::string, std::string, std::string);
    
    void setName(std::string name);
    void setId(std::string id);
    void setPosition (std::string position);
    
    void display( );
    
    std::string getName( );
    std::string getId( );
    std::string getPosition( );
};

#endif /* Employee_hpp */
