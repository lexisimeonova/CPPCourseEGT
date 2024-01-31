#include "NonAlcoholic.hpp"
 
 NonAlcoholic::NonAlcoholic(std::string, double, double, double) {
     setCityTax(cityTax);
     setLiters(liters);
     calculatedPriceNonA(0.0);
 }


void NonAlcoholic::setCityTax(double cityTax) {
    this->cityTax=cityTax;
}

void NonAlcoholic::setLiters(double liters) {
    this->liters=liters;
}

void NonAlcoholic::calculatedPriceNonA(double calculatedPriceNonA) {
    
    calculatedPriceNonA = Drinks::getDrinksQuantity() * Drinks::getDrinksPrice() + cityTax;
    cout << calculatedPriceNonA << endl;
    
}

double NonAlcoholic::getCityTax() {
    return this->cityTax;
}

double NonAlcoholic::getLiters() {
    return this-> liters;
}
