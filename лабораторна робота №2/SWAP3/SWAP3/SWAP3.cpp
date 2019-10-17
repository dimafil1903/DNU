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
	L = C;
	C = B;
	B = A;
	A = L;

	cout <<"A="<< A<< endl <<"B=" << B<< endl <<"C=" << C<<endl;
	system("pause");
}

