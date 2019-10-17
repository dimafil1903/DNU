// ABC.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include "windows.h";
#include "locale";
using namespace std;
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int A, B, C, L;
	cout << "Введите значения\n";
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	cout << "A=" << A  << " B=" << B  << " C=" << C << endl << endl;
	L = A;
	A = B;
	B = C;
	C = L;

	cout << "A=" << A  << " B=" << B  << " C=" << C << endl;
	system("pause");
}

