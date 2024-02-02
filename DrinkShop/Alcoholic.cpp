#include "Alcoholic.hpp"

Alcoholic::Alcoholic(string, double revenueTax, double alcoholicPercentige, double) {
     setRevenueTax(revenueTax);
    setAlcoholicPercentige(alcoholicPercentige);
     calculatedPriceA(0.0);
 }
 
 

void Alcoholic::setRevenueTax(double revenueTax) {
    this->revenueTax=revenueTax;
}

void Alcoholic::setAlcoholicPercentige(double alcoholicPercentige) {
    this -> alcoholicPercentige = alcoholicPercentige;
}

void Alcoholic::calculatedPriceA(double calculatedPriceA) {
    
    calculatedPriceA = Drinks::getDrinksQuantity() * Drinks::getDrinksPrice() * revenueTax;
    cout << calculatedPriceA << endl;
    
}

double Alcoholic::getRevenueTax() {
    return this-> revenueTax;
}

double Alcoholic::getAlcoholicPercentige() {
    return this-> alcoholicPercentige;
}
