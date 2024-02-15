/*
 Задача 2
 Да се намерят всички месеци в годината, които имат зададен ден и дата (пр. Сряда, 3-ти)
 Вход:
 - ден, дата и месец за които сме сигурни че знаем (пр. Събота, 9-ти Декември)
 - типа на годината (високосна или не)
 Изход:
 - Месеците в които има зададения ден и дата
 */
#include <iostream>
using namespace std;

int main( ){
    int i;
    int day; //of the week
    int date; //of the mnth
    int mnth[12] = {0}; //months
    bool leapYear; // 0-29f,1-28t
    
    cout << "Write day of the week, date of the month and whether the year is leap or not: ";
    cin >> day >> date >> leapYear;
    day = (day - 1) % 7 + 1; // 0-6
    int current = day;
    
    int mnthSize [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    mnthSize[1] += leapYear; //mnthSize[1] - february
    
    for ( i = 0; i < date; ++i){
        if ((current + date-1) % 7 == 0){
            mnth[i] += 1;
        }
        current = (current + mnthSize[i]) % 7;
    }
  
    string mnthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
   
    
    cout << days[day-1] << " " << date << "th is in:" << endl;
    
    for (i = 0; i < 12; ++i){
        if (mnth[i] > 0) {
           cout << mnthNames[i] << " ";
        } else{
            cout << "- ";
        }
        
    }
    cout << endl;
    
    return 0;
}
