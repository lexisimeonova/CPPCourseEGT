#ifndef NonAlcoholic_hpp
#define NonAlcoholic_hpp
#include "Drinks.hpp"

class NonAlcoholic{
public:
    NonAlcoholic(std::string, double, double, double);
    void setCityTax(double cityTax);
    void setLiters(double liters);
    void calculatedPriceNonA(double calculatedPriceNonA); //calcPrice=quantity*price+cityTax
    double getCityTax( );
    double getLiters( );
    
private:
    double cityTax;
    double liters;
};

#endif /* NonAlcoholic_hpp */
