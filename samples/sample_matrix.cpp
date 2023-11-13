// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------
/*int main()
{
    TVector <int> v(5);
    cin >> v;
    v[0] = 10;
    TVector <int> v1 = v + 2;
    cout << v << endl;
    cout << v1 << endl;
    cout << v * v1 << endl;
    cout << v1 - v << endl;
    cout << "matrix" << endl;
    TMatrix <int> m(2);
    cin >> m;
    TMatrix <int> m1(2);
    cin >> m1;
    cout << m << endl;
    cout << m1 << endl;
    cout << m + m1 << endl;
    cout << m - m1 << endl;
}*/
void main()
{
    TMatrix<int> a(5), b(5), c(5);
    int i, j;

    setlocale(LC_ALL, "Russian");
    cout << "Тестирование программ поддержки представления треугольных матриц"
        << endl;
    for (i = 0; i < 5; i++)
        for (j = i; j < 5; j++)
        {
            a[i][j] = i * 10 + j;
            b[i][j] = (i * 10 + j) * 100;
        }

  c = a + b;
  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;
  cout << "Matrix c = a + b" << endl << c << endl;
}
/*void main() {
    TMatrix<int> m1(3);
    m1[0][0] = 1; m1[0][1] = 2; m1[0][2] = 3;
    m1[1][0] = 4; m1[1][1] = 5; m1[1][2] = 6;
    m1[2][0] = 7; m1[2][1] = 8; m1[2][2] = 9;

    TMatrix<int> m2(3);
    m2[0][0] = 9; m2[0][1] = 8; m2[0][2] = 7;
    m2[1][0] = 6; m2[1][1] = 5; m2[1][2] = 4;
    m2[2][0] = 3; m2[2][1] = 2; m2[2][2] = 1;

    TMatrix<int> result = m1 - m2;

    
    cout << "Matrix a = " << endl << m1 << endl;
    cout << "Matrix b = " << endl << m2 << endl;
    cout << "Matrix c = a + b" << endl << result << endl;
}*/
//---------------------------------------------------------------------------
