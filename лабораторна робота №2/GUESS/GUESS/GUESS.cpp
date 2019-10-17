#include <iostream>
#include "windows.h";
#include "locale";
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double  x;
	cout << "Придумайте число и впишите его сюда: \n"; 
	cin >> x;
	cout << "С придуманным числом проведите такие операции:\n (((x*10)/2+x)/3+4)/2-2 и в результате вы должны получить это число\n"; 
	double  y = (((x * 10) / 2 + x) / 3. + 4) / 2 - 2;
		system("pause");
	cout << y << " - это оно?\n";

}