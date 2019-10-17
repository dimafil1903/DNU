// ABS.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "windows.h";
#include "locale";
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	double x;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
   cout << "Введите число,чтоб вычеслить его модуль\n X=";
   cin >> x;
   cout << "|" << x << "| = " << abs(x) << endl;;
}

