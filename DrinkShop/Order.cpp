#include "Order.hpp"

int Order::numberOfOrders = 0;

Order::Order(string orderName){
    this->orderName = orderName;
    numberOfOrders++;
    this->number=numberOfOrders;
    
}

void Order::addDrink(Drinks*drink){
    this->drinksName.push_back(drink);
}


/*
 void Order::print( ){
     for (int i=0; i<drinksName.size(); i++){
         cout << drinksName << endl;
     }
 }
 */


