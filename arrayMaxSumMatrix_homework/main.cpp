/*
 Задача 1
 Дадена е m x n  матрица от числа (пр. 7x8)
 Дадена е подматрица k x k, k <= min(m,n) (пр. 3x3)
 Да се намери максималната сума от елементи k x k в m x n (пр. кои 3x3 числа сумарно дават макимален резултат).
 Вход: m,n, k
 Изход: maxSum
 */
#include <iostream>
using namespace std;

int main() {
    
    int m, n, k, i, innerM, innerN;
    cout << "Enter rows and cols for the matrix: " << endl;
    cin >> m >> n ;
    cout << "Enter rows and cols for the inner matrix: " << endl;
    cin >> innerM >> innerN;
    
    int arr[100][100];
    int maxSum = 0;
    int currentSum = 0; //stores el in the current inner matrix
    
    cout << "Enter elements of the matrix: " << endl;;
    for (i = 0; i < m; ++i){
        for ( k = 0; k < n; ++k){
            cout << "Enter element [" << i << "]" << "[" << k << "]" << ": ";
            cin >> arr[i][k];
        }
    } //enters matrix' el
    
    for ( i = 0; i <= m - innerM; ++i){ //ensures the innerMatrix does not go past the last row
        for ( k = 0; k <= n - innerN; ++k){ // does not go past the last column
            currentSum = 0;
            for (int inneri = 0; inneri < innerM; ++inneri) {
                for (int innerk = 0; innerk < innerN; ++innerk) {
                    currentSum += arr[i + inneri][k + innerk];
                }
            }
            
            if ( currentSum > maxSum ){
                maxSum = currentSum;
            }
           
        }
    }
    cout << "Maximum sum of " << innerM << "x" << innerN << " inner matrix: "  << maxSum << endl;
    
    return 0;
}
 
