#include "Member.hpp"
#include <iostream>

Member::Member(std::string name, int age, std::string id)
    : name(name), age(age), id(id), borrowedBook(nullptr) {}

void Member::borrowBook(Book* book) {
    
    if (book != nullptr) {
        std::cout << name << " " << age << " years old, with an ID number: " << id << ", is borrowing the book - ";
        book->display();
        borrowedBook = book;
    } else {
        std::cout << "Invalid request to borrow a book." << std::endl;
    }
     
}

void Member::display() {
 
}

void Member::setName(std::string name) {
    this->name=name;
}

void Member::setAge(int age) {
    this->age=age;
}

void Member::setId(std::string id) {
    this->id=id;
}

std::string Member::getName() {
    return this->name;
}

int Member::getAge() {
    return this->age;
}

std::string Member::getId() {
    return this->id;
}
