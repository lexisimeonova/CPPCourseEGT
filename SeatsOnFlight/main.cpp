/* EX:
 assign seats on a flight using arr[10], capacity is 10; 0 - free; 1 - occupied
*/

#include <iostream>
using namespace std;

int main(){
    int n = 10, i, seat, customers = 10, currentCustomer=0;
    int arr[n];
    
    for (i=0; i<n; i++){
        arr[i] = 0;
        cout << arr[i] << endl;
    }
    
    cout << "I want seat: " ;
    cin >> seat;
    
    if (seat >= 0 && seat < n && arr[seat] == 0) {
        arr[seat] = 1;
        currentCustomer++;
    } else {
        cout << "Invalid seat or seat already taken." << endl;
    }
    for (i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    while (currentCustomer < customers) {
        int newS;
        cout << "I want seat: ";
        cin >> newS;
        if (newS >= 0 && newS < n && arr[newS] == 0) {
            arr[newS] = 1;
            currentCustomer++;
        } else {
            for (int j = 0; j < n; j++) {
                if (arr[j] == 0) {
                    arr[j] = 1;
                    currentCustomer++;
                    break; 
                }
            }
        }
    }
    
    return 0;
}

