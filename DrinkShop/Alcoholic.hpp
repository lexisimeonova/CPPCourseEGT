#ifndef Alcoholic_hpp
#define Alcoholic_hpp
#include "Drinks.hpp"


class Alcoholic{
public:
    Alcoholic(std::string, double, double, double);
    
    void setRevenueTax(double revenueTax);
    void setAlcoholicPercentige(double alcoholicPercentige);
    void calculatedPriceA(double calculatedPriceA );//Quantity*price*revenueTax
    
    double getRevenueTax( );
    double getAlcoholicPercentige( );
    
private:
    double revenueTax;//akciz
    double alcoholicPercentige;
    //double calculatedPriceA;
};

#endif /* Alcoholic_hpp */
