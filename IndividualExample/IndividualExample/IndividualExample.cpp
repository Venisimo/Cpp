﻿// IndividualExample.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
void func(int *x1, int *y1, int *x2, int *y2) {
    cout << "Enter x1:";
    cin >> *x1;
    cout << "Enter y1:";
    cin >> *y1;
    cout << "Enter x2:";
    cin >> *x2;
    cout << "Enter y2:";
    cin >> *y2;
    if (abs(*x1 - *x2) == abs(*y1 - *y2)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int x1;
    int x2;
    int y1;
    int y2;
    func(&x1, &y1, &x2, &y2);
   
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.