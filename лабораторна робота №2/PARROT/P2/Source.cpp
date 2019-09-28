
#include <iostream>
#include <locale>;
#include "windows.h";
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int size = 80;
	char word[size];
	cout << "Напишите строчку текста: \n"; cin.getline(word, size);
	cout << word<<endl;
	system("pause");
	return 0;
}

