#ifndef Customer_hpp
#define Customer_hpp
#include <string>
#include <stdio.h>
#include "Order.hpp"
#include <vector>

class Customer {
    
public:
    Customer(string);
    void print( );
    void addOrder(Order*);
    
private:
    string customerName;
    vector<Order*>order;
    
};

#endif /* Customer_hpp */
