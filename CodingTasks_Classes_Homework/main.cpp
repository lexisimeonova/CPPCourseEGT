#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string title;
    string author;
    int pages;
public:
    Book(string title, string author, int pages): title(title), author(author), pages(pages) { };
    void display( ){
        cout << "The book's name is " << title << ", written by " << author << " and has " << pages << " pages. " << endl;
    };
};

int main() {
    
    Book book("Stochholm", "Mary J.", 300);
    
    book.display();
    
    return 0;
}
