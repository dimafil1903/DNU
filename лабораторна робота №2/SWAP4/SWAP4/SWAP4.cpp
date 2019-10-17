#include <iostream>
#include "windows.h"
#include "locale"
using namespace std;
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int A, B, C,D,L;
	cout << "Введите значения\n";
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	cout << "D=";
	cin >> D;
	L = D;
	D = C;
	C = B;
	B = A;
	A = L;
	
	cout << "результат\n";
	cout << "A=" << A << endl << "B=" << B << endl << "C=" << C << endl << "D=" << D << endl;
	system("pause");
}

