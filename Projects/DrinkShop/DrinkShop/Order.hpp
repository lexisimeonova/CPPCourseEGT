#ifndef Order_hpp
#define Order_hpp
#include "Drinks.hpp"

class Order{
public:
    Order(string);
    void addDrink(Drinks*);
    void print( );
    
private:
    string orderName;
    vector<Drinks*>drinksName;
    int number;
    static int numberOfOrders;
    
};


#endif /* Order_hpp */
