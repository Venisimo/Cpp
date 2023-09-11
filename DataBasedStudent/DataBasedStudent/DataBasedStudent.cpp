// DataBasedStudent.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

void Output(string** arr, int& size){
    cout << "\n" << "Данные изменены" << "\n" << "Вот новые данные:" << endl;
    cout << "id " << "surname " << "name " << "age " << "contact " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

void DeleteUser(string** arr, int& id, int& size) {
    int DeleteId;
    cout << "Выберите студента, которого хотите удалить (по id): ";
    cin >> DeleteId;

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i][0] == to_string(DeleteId)) {
            for (int j = i; j < size - 1; j++) {
                for (int k = 0; k < 5; k++) {
                    arr[j][k] = arr[j + 1][k];
                }
            }
            size--;
            found = true;
            break;
        }
    }

    if (found) {
        cout << "\n" << "Студент с id " << DeleteId << " удален." << "\n" << "Вот новые данные:" << endl;
        cout << "id " << "surname " << "name " << "age " << "contact " << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < 5; j++) {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else {
        cout << "Ошибка: Студент с id " << DeleteId << " не найден." << endl;
    }
}


void EditUser(string** arr, int& size) {
    string name;
    string surname;
    string contact;
    string age;
    int EditId;
    int EditParam;
    cout << "Выберете стундента, данные которого хотите имзенить (по id): ";
    cin >> EditId;
    EditId -= 1;
    cout << "Что хотите изменить?" << "\n" << "1. Фамилию" << "\n" << "2. Имя" << "\n" << "3. Возраст" << "\n";
    cout << "4. Контакты" << "\n" << "5. Всё сразу" << endl;
    cin >> EditParam;
    int EditParamStop = EditParam + 1;
    int EditIdStop = EditId + 1;
    if (EditParam == 1) {
        for (int i = EditId; i < EditIdStop; i++) {
            for (int j = EditParam; j < EditParamStop; j++) {
                cout << "\n" << "Введите новую фамилию: ";
                cin >> surname;
                arr[i][j] = surname;
            }
        }
    }
    else if (EditParam == 2) {
        for (int i = EditId; i < EditIdStop; i++) {
            for (int j = EditParam; j < EditParamStop; j++) {
                cout << "\n" << "Введите новое имя: ";
                cin >> name;
                arr[i][j] = name;
            }
        }
    }
    else if (EditParam == 3) {
        for (int i = EditId; i < EditIdStop; i++) {
            for (int j = EditParam; j < EditParamStop; j++) {
                cout << "\n" << "Введите новый возраст: ";
                cin >> age;
                arr[i][j] = age;
            }
        }
    }
    else if (EditParam == 4) {
        for (int i = EditId; i < EditIdStop; i++) {
            for (int j = EditParam; j < EditParamStop; j++) {
                cout << "\n" << "Введите новые контакты: ";
                cin >> contact;
                arr[i][j] = contact;
            }
        }
    }
    else if (EditParam == 5) {
        for (int i = EditId; i < EditIdStop; i++) {
            for (int j = 1; j < 2; j++) {
                cout << "\n" << "Введите новую фамилию: ";
                cin >> surname;
                arr[i][j] = surname;
            }
            for (int j = 2; j < 3; j++) {
                cout << "\n" << "Введите новое имя: ";
                cin >> name;
                arr[i][j] = name;
            }
            for (int j = 3; j < 4; j++) {
                cout << "\n" << "Введите новый возраст: ";
                cin >> age;
                arr[i][j] = age;
            }
            for (int j = 4; j < 5; j++) {
                cout << "\n" << "Введите новые контакты: ";
                cin >> contact;
                arr[i][j] = contact;
            }
        }
    }
    cout << "\n" << "Данные изменены" << "\n" << "Вот новые данные:" << endl;
    cout << "id " << "surname " << "name " << "age " << "contact " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

void addUser(string** arr, int id) {
    string name;
    string surname;
    string contact;
    string age;
    int NewId = id + 1;
    for (int i = id; i < NewId; i++) {
        for (int j = 0; j < 1; j++) {
            id++;
            arr[i][j] = to_string(id);
            cout << "Новый id: " << id;
        }
        for (int j = 1; j < 2; j++) {
            cout << "\n" << "Введите фамилию: ";
            cin >> surname;
            arr[i][j] = surname;
        }
        for (int j = 2; j < 3; j++) {
            cout << "\n" << "Введите имя: ";
            cin >> name;
            arr[i][j] = name;
        }
        for (int j = 3; j < 4; j++) {
            cout << "\n" << "Возраст: ";
            cin >> age;
            arr[i][j] = age;
        }
        for (int j = 4; j < 5; j++) {
            cout << "\n" << "Контакты: ";
            cin >> contact;
            arr[i][j] = contact;
        }
    }
    cout << "id " << "surname " << "name " << "age " << "contact " << endl;
    for (int i = 0; i < NewId; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    string names[5] = { "Иван", "Михал", "Константин", "Петр", "Кирилл" };
    string surnames[5] = { "Смирнов", "Иванов", "Шевченко", "Лисов", "Петров" };
    string contacts[5] = { "+78049320423", "+78929148019", "+78758325234", "+79241421421", "+742141241432" };
    string ages[10] = { "18", "19", "20", "21", "22", "23",  "24", "25", "26" };
    int N = 10;
    int M = 5;
    string** arr = new string * [N];
    for (int i = 0; i < N; i++) {
        arr[i] = new string[M];
    }
    cout << "id " << "surname " << "name " << "age " << "contact " << endl;
    static int id = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {
            id++;
            arr[i][j] = to_string(id);
            cout << arr[i][j] << " ";
        }
        for (int s = 1; s < 2; s++) {
            arr[i][s] = surnames[rand() % 5];
            cout << arr[i][s] << " ";
        }
        for (int n = 2; n < 3; n++) {
            arr[i][n] = names[rand() % 5];
            cout << arr[i][n] << " ";
        }
        for (int a = 3; a < 4; a++) {
            arr[i][a] = ages[rand() % 10];
            cout << arr[i][a] << " ";
        }
        for (int c = 4; c < 5; c++) {
            arr[i][c] = contacts[rand() % 5];
            cout << arr[i][c] << " ";
        }
        cout << "\n";
    }

    for (int vybor = 0; vybor != 5; ) {
        cout << "\n" << "Что хотите сделать: " << "\n" << "1. Добавить" << "\n" << "2. Изменить" << "\n" << "3. Удалить" << "\n";
        cout << "4. Вывести" << "\n" << "5. Закрыть" << "\n";
        cin >> vybor;
        if (vybor == 1) {
            addUser(arr, id);
            id++;
        }
        else if (vybor == 2) {
            EditUser(arr, N);
        }
        else if (vybor == 3) {
            DeleteUser(arr, id, N);
            id--;
        }
        else if (vybor == 4) {
            Output(arr, N);
        }
    }
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
