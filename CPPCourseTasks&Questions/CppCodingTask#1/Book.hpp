#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <string>

class Book{
private:
    std::string title;
    std::string author;
    std::string isbn;
    
public:
    Book(std::string, std::string, std::string);
    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setIsbn(std::string isbn);
    void display( );
    
    std::string getTitle( );
    std::string getAuthor( );
    std::string getIsbn( );
    
    
};

#endif /* Book_hpp */
