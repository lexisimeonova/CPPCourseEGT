#include "Department.hpp"

Department::Department ( std::string) {
    setDepatmentName(departmentName);
}

void Department::setDepatmentName(std::string departmentName) {
    this->departmentName=departmentName;
}
std::string Department::getDepartmentName() {
    return this->departmentName;
}


void Department::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

void Department::display() {
    for (auto& employee : employees) {
            employee.display();
            std::cout << std::endl;
    }
}
