#include "Drinks.hpp"

 Drinks::Drinks(std::string, std::string drinksName, std::string drinksType, double drinksQuantity, double drinksPrice) {
     setDrinksName(drinksName);
     setDrinksType(drinksType);
     setDrinksQuantity(drinksQuantity);
     setDrinksPrice(drinksPrice);
 }

void Drinks::setDrinksName(std::string drinksName) {
    this->drinksName = drinksName;
}

 void Drinks::setDrinksPrice(double drinksPrice) {
     this->drinksPrice = drinksPrice;
 }

void Drinks::setDrinksQuantity(double drinksQuantity) {
    this->drinksQuantity=drinksQuantity;
}

void Drinks::setDrinksType(std::string drinksType){
    this->drinksType=drinksType;
}

std::string Drinks::getDrinksName() {
    return this->drinksName;
}

double Drinks::getDrinksPrice() {
    return drinksPrice;
}

double Drinks::getDrinksQuantity() {
    return drinksQuantity;
}
