#include<iostream>

using namespace std;

//Задача 1
//class Homo {
//public:
//    int age;
//    void setAge() {
//        cout << "Введите ваше возраст:";
//        cin >> age;
//    }
//    void getAge() {
//        cout << "Ваш возраст " << age << endl;
//    };
//    string name;
//    void setGetName() {
//        cout << "Введите ваше имя:";
//        cin >> name;
//        cout << "Ваше имя " << name;
//    };
//};

// Задача 2 set и get получения лошадинных сил, так же предупреждение если больше 800
//class Car {
//private:
//    int horsePower;
//public:
//    void setHorsePower() {
//        cout << "Введите лошадинные силы: ";
//        cin >> horsePower;
//        if (horsePower > 800) {
//            cout << "Предупреждение! Больше 800!" << endl;
//            this->setHorsePower();
//        }
//    };
//
//    void getHorsePower() {
//        cout << "Лошадинные силы этой машины - " << horsePower;
//    };
//
//
//};

//Задача 3
class Picture {
private:
    int year;
    string size;
    string name;
public:
    Picture(int y, string s, string n) {
            year = y;
            size = s;
            name = n;
        };
    void get() {
        cout << year << endl;
        cout << size << endl;
        cout << name << endl;
    }
};

//Задача 4
//class Queue {
//private:
//    int *arr;
//    int size = 0;
//    
//public:
//    Queue() {
//        arr = new int[100];
//        for (int i = 0; i < 100; i++) {
//            arr[i] = 0;
//        };
//        for (int i = 0; i < 100; i++) {
//            if (arr[i] > 0) {
//                size++;
//            }
//        };
//    }
//    void remove() {
//        for (int i = 0; i < 100; i++){
//            if (i + 1 != 100)
//                arr[i] = arr[i + 1];
//            else
//                arr[i] = 0;
//        };
//    };
//    void print() {
//        for (int i = 0; i < 100; i++) {
//            if(arr[i]!=0)
//                cout << arr[i] << endl;
//        };
//    };
//    void add() {
//        cin >> arr[size];
//        size++;
//    }
//};

int main()
{
    setlocale(LC_ALL, "Russian");
    //Задача 1
   /* Homo Ivan;
    Ivan.setAge();
    Ivan.getAge();
    Ivan.setGetName();*/

   //Задача 2
  /*  Car bugatti;
    bugatti.setHorsePower();
    bugatti.getHorsePower();*/

    //Задача 3
    Picture Vangog(1890, "1920:1080", "Вангон");
    Vangog.get();

    //Задача 4
   /* Queue ex;
    ex.print();
    ex.add();
    ex.add();
    ex.print();
    ex.remove();
    ex.print();*/
    return 0;
}

//создайте очередь, индентификаторы создать класс имеет атрибут size и массив для хранения данных очереди, методы remove для удаления 1 элемента очереди, print для вывода очереди и add для добавления в конец очереди 