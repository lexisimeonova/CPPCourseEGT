/*
Напишете програма на С++, която:
Използва въведени от потребител цели числа
Проверява дали числото е четно или нечетно
Ако числото е четно, на екрана се извежда “even”, ако е нечетно – “odd”
*/
#include <iostream>
using namespace std;

int main() {
    
    int i, n, num;
    cout << "How many munbers would you like to write?" << endl;
    cin >> n;
    for (i=0; i<n; i++){
        cout << "Write number " << i+1 << ": ";
        cin >> num;
        if(num%2==0){
            cout << "even" << endl;
        } else{
            cout << "odd" << endl;
        }
    }

    return 0;
}
