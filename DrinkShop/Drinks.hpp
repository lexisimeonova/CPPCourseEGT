#ifndef Drinks_hpp
#define Drinks_hpp
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Drinks{
    
public:
    Drinks(string, string, string, double, double);
    void setDrinksName(string drinksName);
    void setDrinksType(string drinksType);
    void setDrinksQuantity(double drinksQuantity);
    void setDrinksPrice(double drinksPrice);

    void print( );
    
    string getDrinksName( );
    static double getDrinksPrice( );
    static double getDrinksQuantity( );
    string getDrinksType( );
    
    
    
private:
    string drinksName;
    static double drinksPrice;
    static double drinksQuantity;
    string nonAlcoholic;
    string alcoholic;
    string drinksType;
    
};

#endif /* Drinks_hpp */
