#ifndef Member_hpp
#define Member_hpp

#include <stdio.h>
#include "Book.hpp"

class Member{
private:
    std::string name;
    int age;
    std::string id;
    
    Book* borrowedBook;
    
public:
    Member(std::string, int, std::string);
    void setName(std::string name);
    void setAge(int age);
    void setId(std::string id);
    
    void display( );
    void borrowBook(Book* book);
    
    std::string getName( );
    int getAge( );
    std::string getId( );
    
};

#endif /* Member_hpp */
