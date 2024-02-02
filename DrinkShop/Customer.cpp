#include "Customer.hpp"

Customer::Customer(string customerName){
    this->customerName=customerName;
}

void Customer::addOrder(Order*order){
    this->order.push_back(order);
}
/*
 void Customer::print( ){
     for(Order order:order){
         order.print( );
     }
 }
 */

