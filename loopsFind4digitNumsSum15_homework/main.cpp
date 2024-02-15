#include <iostream>
using namespace std;

/*
 Задача 1:
 Да се намери броя на всички 4цифрени числа на които сбора е 15 (1149, 1158…).
 */

int main() {
    
    cout << "Числата със сбор на цифрите 15 са: " ;

        for (int i = 1000; i < 9999; ++i) {
            int number = i;
            int sum = 0;

            while (number > 0) {
                sum += number % 10;
                number /= 10;
            }

            if (sum == 15) {
               cout << i << " ";
            }
        }

    
    
    
    return 0;
}
