// СОЛДАТОВ А. М.
// ПИ-241
// Задание : использование процедур и функции; Вариант 10
#include <iostream>

using namespace std;
int matrix_and_result( int a[], int m, int n)
{
    int count;
    float average_value;
    count = average_value = 0;
    for (int i = 0; i < m; i++)
    {
        for ( int j = 0; j < n; j++ )
            cin >> a[i * n + j];
    }
    cout << "Ваша матрица " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i * n + j ] << " ";
        cout << endl;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            if (a[i * n + j] > 0)
            {
                count ++;
                average_value = average_value + a[i * n + j]; 
            }
    }
    average_value = average_value / count;
    cout << "Среднее значение положительных чисел равно " << average_value << endl;
    return 0;
}

int main()
{
    int k, n;
    cout << "Введите колличество строк и столбцов" << endl;
    cin >> k >> n;
    int R[k][n];
    int L[k][n];
    cout << "Введите данные для первой матрицы" << endl;
    matrix_and_result(reinterpret_cast<int *>(R), k, n);
    cout << "Теперь введите данные для второй матрицы" << endl;
    matrix_and_result(reinterpret_cast<int *>(L), k, n);
    return 0;
}