﻿// Ex.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
using namespace std;
//задача 1
//void func() {
//    cout << "Век живи, век учись!";
//}

//задача 2
//void func(int hour) {
//    int min = hour * 60;
//    cout << "в " << hour << " часах " << min << " минут";
//}

//задача 3
//void func(int num1, int num2) {
//    if (num1 > num2) {
//        cout << num1;
//    } else if (num2 > num1){
//        cout << num2;
//    } else {
//        cout << num1;
//    }
//}

//задача 4
//void func(int num1, int num2, int num3, int num4, int n) {
// 
//    cout << num1 << num2 << num3 << num4;
//}

//задача 5
//void func(string friend_order = "", string tea = "black tea") {
//    cout << tea << endl;
//    cout << friend_order;
//}

//задача 6
//void name(int num1, int num2) {
//    cout << "Integer = ";
//    cout << num1 + num2;
//}
//void name(double num1, double num2) {
//    cout << "Double = ";
//    cout << num1 + num2;
//}

//задача 7
//int func(int n) {
//    if (n == 1) {
//        return 1;
//    }
//    else {
//        return n + func(n - 1);
//    }
//}

//тренировка
//void artsum(int art[], int size) {
//    art[0] = art[3 - 1];
//    cout << art[0];
//}

//Задача 8
//void fortuna(string art[], int n, int size) {
//    for (int i = 0; i < size; i++) {
//        if ((i + 1) % n == 0) {
//            cout << art[i];
//        }
//    }
//}

//void inc(int* x) {
//    *x = 100;
//}

//задача 9
void inc(int *x, int *z) {
    int y;
    cout << "Введите множитель: ";
    cin >> y;
    *x = 100;
    *z = *x * y;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    //задача 1
    //func();

    //Задача 2 напишите функцию, которая берет в качетсве параметра кол-во часов заданное пользователем переводит их в минуты и вывводит в коносль.
 /*   int hour;
    cout << "Введите часы:";
    cin >> hour;
    func(hour);*/

    //Задача 3 по очереди брасают кости. Берем 2 числа и вернет наибольшее из 2 выведете результат на экран, если они равны, то выводит число, которое выпало.
   /* int num1;
    int num2;
    cout << "Первый кубик: ";
    cin >> num1;
    cout << "Второй кубик: ";
    cin >> num2;
    func(num1, num2);*/

    //Задача 4 пароль из 4 чисел в диапозоне от 0 до n. Программа в кчаетсве вводных данных использует число n. Генерирует 4 случ числа из диаозона и выведет их без пробелов
    /*srand(time(0));
    int n;
    cout << "Введите диапозон от 0 до: ";
    cin >> n;
    int num1 = rand() % n;
    int num2 = rand() % n;
    int num3 = rand() % n;
    int num4 = rand() % n;
    func(num1, num2, num3, num4, n);*/

    //Задача 5 приносит черный чай по умолчанию. Укажите заказ друга в качетсве вводных данных, завершите функцию, что бы она по умолчанию выводила функцию blackt tea и заказ друга если он дан
    /*string friend_order;
    cout << "Напишите заказ друга: ";
    cin >> friend_order;
    func(friend_order);*/

    //Задача 6 напишите функцию сумму двух чилел, перегрузите её чтобы выплонить ту же операцию со значением типа double
   /* int num1;
    double d_num1;
    double d_num2;
    int num2;

    cout << "Введите число 1: ";
        cin >> num1;
    cout << "Введите число 2: ";
        cin >> num2;

    cout << "Введите число 1: ";
        cin >> d_num1;
    cout << "Введите число 2: ";
        cin >> d_num2;

    name(num1, num2);
    name(d_num1, d_num2);*/

    //задача 7 с каждым новым тортом приготовлением яйцо увелич на 1, написать кол-во тортов. Расчитайте рекурсивно сколько яиц было использовано. 
    /*int n;
    cout << "Введите кол-во тортов: ";
    cin >> n;
    cout << func(n);*/

    //тренировка
    /*int Arr[3] = { 1, 2, 3 };
    artsum(Arr, 3);
    cout << Arr[0];*/

    //Задача 8 В СУПЕР МАРКЕТЕ проходит акция каждый выбранный покупатель поулчает товары бесплатно, напишите функцию который исп. массив клиентов, его рамзер и число n и выводит имена каждого счастливчика в отдельной строке.
  /*  string Arr[6] = { "Roman", "Ivan", "Yaroslav", "Evgeniy", "Maxim", "Ilya" };
    int size = 6;
    int n;
    cout << "Товар бесплатно получит каждый: ";
        cin >> n;

    fortuna(Arr, n, size);*/


    //задача 9. Напишите программу и вызовите функцию, данные введенные значения мегабайтов до и после акции на экран, множитель будет принят в качестве вводных данных функции множителя.
    // 1.Ввод кол-во мегабайт
    // 2. Множитель
    int x;
    int z;
    inc(&x, &z);
    cout << "До: ";
    cout << x << endl;
    cout << "После: ";
    cout << z << endl;
}
