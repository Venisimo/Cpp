// Examples4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    //чтобы проверить одну из задач закомментируете остальные залачи
   
    //zadanie 1
    long double p = 3.1415926;
    double f = round(p * 1000) / 1000;
    cout << f;

    //zadanie 2
    string name;
    cout << "Введите имя: ";
    cin >> name;
    cout << "Привет, ";
    cout << name;
    cout << "!";

    //zadanie 3
    int x, y, z, n;
    cout << "Введите числа: ";
    cin >> x;
    cin >> y;
    cin >> z;
    cin >> n;
    cout << x << " " << y << " " << z << " " << n;

    //zadanie 4
    int x, y, a;
    cout << "Введите x: ";
    cin >> x;
    y = 17 * pow(x, 2) - 6 * x + 13;
    cout << "Ответ: " << y << endl;
    cout << "Введите a: ";
    cin >> a;
    y = 3 * pow(a, 2) + 5 * a - 21;
    cout << "Ответ: " << y;

    //zadanie 5
    double x, y, a, g;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    a = (x + y) / 2;
    g = sqrt(x * y);
    cout << "Арифметическое целое: " << a << endl;
    cout << "Геометрическое целое: " << g;

    //zadanie 6
    double x;
    double y;
    double z;
    cout << "Введите количество жителей: ";
    cin >> x;
    cout << "Введите площадь государства: ";
    cin >> y;
    z = x / y;
    cout << "Плотность населения = ";
    cout << z;

    //zadanie 7
    double a, b, x, y;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    x = ((2 / (pow(a, 2) + 25)) + b) / (sqrt(b) + ((a + b) / 2));
    y = (abs(a) + 2 * sin(b)) / (5.5 * a);
    cout << "Ответ: " << x << endl;
    cout << "Ответ: " << y << endl;

    //zadanie 8
    int a, b, c, s;
    int a1, a2;
    int b1, b2;
    int c1, c2;
    int AB;
    int AC;
    int BC;
    int CH;
    int vecABx;
    int vecABy;
    int vecACx;
    int vecACy;
    int vecBCx;
    int vecBCy;
    int p;
    cout << "Введите точки a: ";
    cin >> a1;
    cin >> a2;
    cout << "Введите точки b: ";
    cin >> b1;
    cin >> b2;
    cout << "Введите точки c: ";
    cin >> c1;
    cin >> c2;
    vecABx = b1 - a1;
    vecABy = b2 - a2;
    AB = sqrt(pow(vecABx, 2) + pow(vecABy, 2));
    vecACx = c1 - a1;
    vecACy = c2 - a2;
    AC = sqrt(pow(vecACx, 2) + pow(vecACy, 2));
    vecBCx = c1 - b1;
    vecBCy = c2 - b2;
    BC = sqrt(pow(vecBCx, 2) + pow(vecBCy, 2));
    p = AB + AC + BC;
    CH = (AB * BC) / (sqrt(pow(AC, 2) + pow(BC, 2)));
    s = (AB * CH) / 2;
    cout << "Периметр = " << p << endl;
    cout << "Площадь = " << s;

    //zadanie 10
    int num, num1, num2, a;
    cout << "Введите число: ";
    cin >> num;
    num1 = num % 10;
    num2 = num / 10;
    a = num1 + num2;
    cout << "Сумма чисел: " << a;
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
