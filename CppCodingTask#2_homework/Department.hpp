#ifndef Department_hpp
#define Department_hpp

#include <stdio.h>
#include "Employee.hpp"
#include <vector>

class Department{
private:
    std::string departmentName;
    std::vector<Employee> employees;
public:
    Department(std::string departmentName);
    
    void setDepatmentName(std::string departmentName);
    std::string getDepartmentName( );
    
    void addEmployee(const Employee& employee);
    void display();
    
};

#endif /* Department_hpp */
