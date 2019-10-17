#include <iostream>
#include "windows.h";
#include "locale";
using namespace std;
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int A, B, C, D, L;
	cout << "Введите значения\n";
	cout << "A=";cin >> A;
	cout << "B=";cin >> B;
	cout << "C=";cin >> C;
	cout << "D=";cin >> D;
	cout << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl << endl;
	L = A;
	A = B;
	B = C;
	C = D;
	D = L;
	cout << "A<=B<=C<=D" << endl << endl;;
	cout << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
	system("pause");
}

