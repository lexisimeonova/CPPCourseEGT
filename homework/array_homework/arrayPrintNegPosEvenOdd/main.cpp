/*
 Take 20 integer inputs from user and print the following:
 number of positive numbers
 number of negative numbers
 number of odd numbers
 number of even numbers
 number of 0.
 */
#include <iostream>
using namespace std;

int main() {
     
    int i;
    int arr[10];
    int pos = 0, neg = 0, odd = 0, even = 0, zero = 0;
    
    cout << "Write 10 numbers" << endl;
    for (i=0; i<10; i++){
        cout << " Num " << i+1 << " is: ";
        cin >> arr[i];
    }
    
    for (i=0; i<10; ++i){
        if ( arr[i] > 0 ){
            pos++;
        } else if (arr[i]<0){
            neg++;
        }
        if (arr[i]%2 == 0){
            even ++;
        } else if (arr[i]%2 != 0){
            odd++;
        } else {
            zero++;
        }

    }
    
    cout << " Num of positive -> " << pos << endl << " Num of negative -> " << neg << endl
    << " Num of odd -> " << odd << endl << " Num of even -> " << even << endl;
    
    
    return 0;
}
