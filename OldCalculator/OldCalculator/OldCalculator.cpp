
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>

using namespace std;
//сложение вычитание, умножение, деление, равно
//реализация через функции
//справочная информация
//продолжение выполнения операции

//проверка на ввод данных
//реализация скобок
void numb(int* num1, int* num2, string* choise, string* answer) {
    cout << "Введите действия" << endl;
    cout << "+ - сложение" << endl;
    cout << "- - вычитание" << endl;
    cout << "* - умножение" << endl;
    cout << "/ - деление" << endl;
    cout << "= - результат" << endl;
    cin >> *num1;
    cin >> *choise;
    cin >> *num2;
    cin >> *answer;

}
void addition(int* resulat, int* num1, int* num2) {
    *resulat = *num1 + *num2;
}
void subtraction(int* resulat, int* num1, int* num2) {
    *resulat = *num1 - *num2;
}
void multiplication(int* resulat, int* num1, int* num2) {
    *resulat = *num1 * *num2;
}
void devision(int* resulat, int* num1, int* num2) {
    *resulat = *num1 / *num2;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int resulat;
    int num1;
    int num2;
    string choise;
    string answer;
    numb(&num1, &num2, &choise, &answer);
    if (choise == "+") {
        addition(&resulat, &num1, &num2);
    }
    else if (choise == "-") {
        subtraction(&resulat, &num1, &num2);
    }
    else if (choise == "*") {
        multiplication(&resulat, &num1, &num2);
    }
    else if (choise == "/") {
        devision(&resulat, &num1, &num2);
    }
    else {
        cout << "Некореткные значения";
    }
    if (answer == "=") {
        cout << resulat;
        num1 = resulat;
    }
    else if (answer == "+") {
        int num3;
        cin >> num3;
        resulat += num3;
        cin >> answer;
        if (answer == "=") {
            cout << resulat;
        }
    }
    else if (answer == "*") {
        int num3;
        cin >> num3;
        resulat *= num3;
        cin >> answer;
        if (answer == "=") {
            cout << resulat;
        }
    }
    else if (answer == "/") {
        int num3;
        cin >> num3;
        resulat /= num3;
        cin >> answer;
        if (answer == "=") {
            cout << resulat;
        }
    }
    else if (answer == "-") {
        int num3;
        cin >> num3;
        resulat -= num3;
        cin >> answer;
        if (answer == "=") {
            cout << resulat;
        }
    }
}
