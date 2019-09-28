
#include <iostream>
#include <iomanip>
#include "windows.h";
#include "locale";
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char surname[244],
		 name[244],
		 middle_name[244],
		 gender[244],
		 date_of_birthday[244],
		 adress[244],
		 phone[244],
		 place_of_study[244],
		 group[244],
		 hobby[244];
	
	cout << "Ваша фамилия: "; cin.getline(surname, 244);
	cout << "Ваше имя:"; cin.getline(name, 244);
	cout << "Ваше отчество:"; cin.getline(middle_name, 244);
	cout << "Ваш пол:"; cin.getline(gender, 244);
	cout << "Ваша дата рождения:"; cin.getline(date_of_birthday, 244);
	cout << "Ваш адресс:"; cin.getline(adress, 244);
	cout << "Ваш номер телефона:"; cin.getline(phone, 244);
	cout << "Ваше место учебы:"; cin.getline(place_of_study, 244);
	cout << "Ваша группа или класс:"; cin.getline(group, 244);
	cout << "Ваше хобби:"; cin.getline(hobby, 244);
	system("cls");
	cout << setw(51)<< "АНКЕТА"<<endl;
	cout << setw(56) << "==================" << endl << endl;
	cout << setw(22) << "Фамилия" << setw(22) << "Имя" << setw(22) << "Отчество"<<endl;
	cout << setw(22) << "-------" << setw(22) << "---" << setw(22) << "--------" << endl;
	cout << setw(22)<< surname<< setw(22) <<name<< setw(22) <<middle_name<< endl << endl;
	cout << setw(22) << "Пол" << setw(22) << "Дата рождения" << setw(22) << "Адресс" << endl;
	cout << setw(22) << "---" << setw(22) << "-------------" << setw(22) << "------" << endl;
	cout << setw(22) << gender << setw(22) << date_of_birthday << setw(22) << adress << endl << endl;
	cout << setw(22) << "Телефон" << setw(22) << "Место учебы" << setw(22) << "Класс или группа" << endl;
	cout << setw(22) << "-------" << setw(22) << "-----------" << setw(22) << "----------------" << endl;
	cout << setw(22) << phone << setw(22) << place_of_study << setw(22) << group << endl << endl;
	cout << setw(44) << "Хобби" << endl;
	cout << setw(44) << "-----" << endl;
	cout << setw(44) << hobby << endl;

}
