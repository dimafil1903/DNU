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
	cout << "��� ��� �����?\n";
	cin.getline(name, 80);
	cout << "������� ��� ���?\n";
	cin.getline(age, 80);
	cout << "���� ����� �����?\n";
	cin.getline(place_of_study, 80);
	cout << "������,"<<age<<" ������ ������," << name << endl;
	cout << "� �� ���� ����� ������� � " << place_of_study << endl;
	system("pause");
}

