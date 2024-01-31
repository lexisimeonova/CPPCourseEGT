/* Ex:
 Food - biscuits/ Choc/ nuts
 Drinks
 Name. ; Price. ; Quantity
 Type (wine, gin, whiskey, water, juice, ice tea, -)
 Print()
 
 Non-Alcoholic
 Liters ; CityTax
 CalculatePrice() → Quantity * Price + CityTax
 
 Alcoholic
 Volume ; Tax
 CalculatePrice() > Quantity * (Price * Tax)
 
 */

#include "Drinks.hpp"
#include "Order.hpp"
#include "Customer.hpp"
#include "Alcoholic.hpp"
#include "NonAlcoholic.hpp"

int main() {
    
    /*
        Order order1 = {"Продукт1", 10.0};
        Order order2 = {"Продукт2", 5.0};
        Order order3 = {"Продукт3", 8.0};
    */
    
    std::cout << "Hello, World!\n";
    
    Customer customer("Someone" );
    Order order( "First Order");
    
    /*
     vector<Drinks*>drinksList;
     Drinks*aPtr = new Alcoholic( );
     order.addDrink(aPtr);
     Drinks*aPtr2 = new Alcoholic( );
     order.addDrink(aPtr2);
     
     order.print();
     customer.addOrder(order);
     customer.print( );
     */
   
    
    
    return 0;
}
