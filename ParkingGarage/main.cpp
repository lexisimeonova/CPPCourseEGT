/* EX:
 A parking garage charges 2.00$ for 3hours. Additional hour 0.5/hour. The max charge for 24hours is 10.00$.
*/

#include <iostream>
using namespace std;

int main() {
    double person1, person2, person3, hours;
    double cost1 = 2.0, cost2 = 2.0, cost3 = 2.0;
    
    cout << "Write for how long each customers stays in the garage." << endl;

    cout << "First customer: " << endl;
    cin >> person1;
    cout << "Second customer: " << endl;
    cin >> person2;
    cout << "Third customer: " << endl;
    cin >> person3;
    
    if (person1 <= 3){
        cout << " Customer 1 has to pay: "  << cost1 << "$" << endl;
    } else if ( person1 > 3 ){
        for ( hours = 3; hours < person1; hours++ ){
            cost1 += 0.5;
        }
        cout << "Customer 1 has to pay: " << cost1 << "$" << endl;
    } else if (person1 >= 24){
        cout << "Customer has reached max time and needs to pay 10.00$" << endl;
    }
    
    if (person2 <= 3){
        cout << "Customer 2 has to pay: " << cost2 << "$" << endl;
    } else if ( person2 > 3 ){
        for ( hours = 3; hours < person2; hours++ ){
            cost2 += 0.5;
        }
        cout << "Customer 2 has to pay: " << cost2 << "$" << endl;
    } else if (person2 >= 24){
        cout << "Customer has reached max time and needs to pay 10.00$" << endl;
    }
    
    if (person3 <= 3){
        cout << "Customer 3 has to pay: "  << cost3 << "$" << endl;
    } else if ( person3 > 3 ){
        for ( hours = 3; hours < person3; hours++ ){
            cost3 += 0.5;
        }
        cout << "Customer 3 has to pay: " << cost3 << "$" << endl;
    } else if (person3 >= 24){
        cout << "Customer has reached max time and needs to pay 10.00$" << endl;
    }
    
    
    
    return 0;
}


