#include "Book.hpp"
#include <iostream>

Book::Book(std::string title, std::string author, std::string isbn)
    : title(title), author(author), isbn(isbn) {}

void Book::setTitle(std::string title) {
    this->title=title;
}

void Book::setAuthor(std::string author) {
    this->author=author;
}

void Book::setIsbn(std::string isbn) {
    this->isbn=isbn;
}

void Book::display() {
    std::cout << "" << title << " written by " << author << " with ISBN " << isbn << ". "<< std::endl << std::endl ;
}

std::string Book::getTitle() {
    return this->title;
}

std::string Book::getAuthor() {
    return this->author;
}

std::string Book::getIsbn() {
    return this->isbn;
}
