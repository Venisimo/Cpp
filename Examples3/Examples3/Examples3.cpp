// Examples3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "math.h"
#include <string>
using namespace std;

//void Zadacha3() {
//	int num;
//	int ost;
//	int max = 0;
//	cout << "Введите число не больше 99: ";
//	cin >> num;
//	if (num > 99) {
//		cout << "Error";
//	}
//	else {
//		ost = num % 10;
//		if ((num / 10) > ost) {
//			cout << num / 10 << "- Большая цифра" << endl;
//			cout << ost << "- Маленькая цифра" << endl;
//		}
//	}
//}
int main()
{
	setlocale(LC_ALL, "Russian");
	//задача 1
	//int CountX;
	//double y = 0;
	//double x;
	//cout << "Введите количество иксов: ";
	//cin >> CountX;
	//for (int i = 1; i <= CountX; i++) {
	//	cout << "Введите значения Z, B, A, Betta для x" << i << endl;
	//	double Z;
	//	double B;
	//	double A;
	//	double Betta;
	//	cout << "Z = "; 
	//	cin >> Z;
	//	cout << "B = ";
	//	cin >> B;
	//	cout << "A = ";
	//	cin >> A;
	//	cout << "Betta = ";
	//	cin >> Betta;
	//	x = pow(Z, 3) - B + pow(A, 2) / pow(tan(Betta), 2);
	//	y += x;
	//	x = 0;
	//}
	//cout << y;
	
	//задача 2
	/*int N;
	int k;
	int sum = 0;
	cout << "Введите N: ";
	cin >> N;
	cout << "Введите k: ";
	cin >> k;
	for (int i = 1; i <= N; i++) {
		sum += pow(i, k);
	}
	cout << "Сумма" << sum;*/

	//задача 3 
	//Zadacha3();

	//задача 4
	/*float V;
	float T;
	double Ugol;
	double a;
	cout << "Введите скорость: ";
	cin >> V;
	cout << "Введите время: ";
	cin >> T;
	double pi = asin(1.0);
	a = asin((9.8 * T) / (2 * V));
	Ugol = a * (90 / pi);
	cout << Ugol;*/
	
	//задача 5
	//int p;
	//int num;
	//int out = 1;
	//cout << "Введите степень: ";
	//cin >> p;
	//cout << "Введите число: ";
	//cin >> num;
	//for (int i = 1; i <= p; i++) {
	//	out *= num;
	//}
	//cout << out;

	//задача 6
	//char cif[100];
	//int x;
	//cout << "Введите последовательность цифер: ";
	//cin >> cif;
	//cout << "Введите порядковый номер цифры: ";
	//cin >> x;
	//cout << "k-я цифра последовательности: " << cif[x - 1];

	//задача 7
	//int x;
	//cout << "Введите длину массива: ";
	//cin >> x;
	//double sum = 0.0;
	//double* arr = new double[x];
	//cout << "Введите значения: ";
	//for (int i = 0; i < x; i++) {
	//	cin >> arr[i];
	//	if (arr[i] > 2.5) {
	//		sum += pow(abs(arr[i]), 2);
	//	}
	//};
	//cout << "Сумма" << sum;
	//delete[] arr;

	//задача 8
	int x;
	int y;
	int** arr;
	int sled = 0;
	cout << "Введите количество строк матрицы: ";
	cin >> x;
	cout << "Введите количество столбцов матрицы: ";
	cin >> y;
	arr = new int*[x];
	for (int i = 0; i < x; i++) {
		arr[i] = new int [y];
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			arr[i][j] = 0 + rand() % 99;
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < x; i++) {
		sled += arr[i][i];
	}
	cout << "След матрицы: " << sled;
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
