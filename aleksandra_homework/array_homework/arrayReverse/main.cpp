/*
    Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.
 */
#include <iostream>
using namespace std;

int main() {
       
       int i,j = 0;
       int arr[5];
       int reverse[5];
       
       for (i=0; i<5; i++){
           cout << "Write num " << i+1 << ": ";
           cin >> arr[i];
       }
       
       cout << "Unreversed array is: ";
       for (i=0; i<5; i++){
           cout << arr[i] << " ";
       }
       cout << endl;
       
       cout << "Reversed array is: ";
       for (i=4; i>=0; i--){
           reverse[i] = arr[j];
           j++;
       }
       for (i=0; i<5; i++){
           cout << reverse[i] << " ";
       }
       cout << endl;
      
    
    return 0;
}
