#include <iostream>
#include "Member.hpp"
#include "Book.hpp"

int main() {
    
    Book book[3] = {
        Book("Ambedkar", "Shashi Tharoor", "0-345-123"),
        Book("Spare", "J. R. Moehringer", "1-123-321"),
        Book("Victory City", "Salman Rushdie", "2-345-678")
    };
    
    Member member[3] = {
        Member("Pepi", 25, "123 456"),
        Member("Gabi", 22, "789 321"),
        Member("Ivana", 30, "321 789")
    };
    
    member[0].borrowBook(&book[1]);
    member[1].borrowBook(&book[2]);
    member[2].borrowBook(&book[0]);
    
    for (int i = 0; i < 3; i++) {
           member[i].display();
           std::cout << std::endl;
       }

    return 0;
}
