#include <iostream>
#include "windows.h";
#include "locale";
using namespace std;
int main()
{
	char name[80];
	char age[80];
	char place_of_study[80];
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Как вас зовут?\n";
	cin.getline(name, 80);
	cout << "Сколько вам лет?\n";
	cin.getline(age, 80);
	cout << "Ваше место учебы?\n";
	cin.getline(place_of_study, 80);
	cout << "Привет,"<<age<<" летний дружок," << name << endl;
	cout << "Я бы тоже хотел учиться в " << place_of_study << endl;
	system("pause");
}

