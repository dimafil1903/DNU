#include <iostream>
#include "windows.h";
#include "locale";
using namespace std;
int main()
{
	char name[80];
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Как вас зовут?\n";
	cin.getline(name, 80);
	cout << "Привет, дружище, " << name << endl;
}

