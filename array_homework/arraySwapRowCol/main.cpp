/*
 Направете двумерен масив от 5х10 елемента (типа няма значение – int, char, string)
 Отпечатайте го във следните варианти:
 1– Нормален табличен вид – 5 реда, 10 колони:
 2– Отпечатайте същата таблицата така, че редовете да станат колони, а колоните редове.
 */
#include <iostream>
using namespace std;

int main() {
    
    int row = 2, col = 3, i, j;
    int arr[row][col], swapArr[col][row];
    
    cout << "Enter array elements " << endl;
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            cout << "Input element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    
    for (j = 0; j < col; j++){
        for (i = 0; i < row; i++){
            //cout << arr[i][j] << " "; //аnswer for 1-
            swapArr[j][i] = arr[i][j]; //аnswer for 2-
            cout << swapArr[j][i] << " "; //аnswer for 2-
        }
        cout << endl; // outputs the arr as it is - rows and cols/ otherwise it would be on a single line
    }
    return 0;
}


