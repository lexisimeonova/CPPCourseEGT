#include "Employee.hpp"
#include <iostream>

Employee::Employee(std::string name, std::string id, std::string position) {
    setName(name);
    setId(id);
    setPosition(position);
}

void Employee::setName(std::string name) {
    this->name=name;
}

void Employee::setId(std::string id) {
    this->id=id;
}

void Employee::setPosition(std::string position) {
    this->position=position;
}

std::string Employee::getName() {
    return this->name;
}

std::string Employee::getId() {
    return this->id;
}

std::string Employee::getPosition() {
    return this->position;
}

void Employee::display(){
    std::cout << name << " " << id << " " << position << std::endl;
}
