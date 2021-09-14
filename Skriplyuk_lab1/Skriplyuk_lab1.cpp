// Skriplyuk_lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Skriplyuk_class_hotel.h"
#include <vector>
#include "Skriplyuk_contclass_hotels.h"

using namespace std;

void menu()
{
	cout << endl;
	cout << "1. Считать с консоли" << endl;
	cout << "2. Вывести на экран" << endl;
	cout << "3. Считать из файлового потока" << endl;
	cout << "4. Вывести в файловый поток" << endl;
	cout << "5. Удалить все отели" << endl;
	cout << "6. Выход" << endl;

}

int main()
{
	setlocale(LC_ALL, "Russian");
	//Skriplyuk_class_hotel hotel;
	Skriplyuk_contclass_hotels* class_hotels;
	class_hotels = new Skriplyuk_contclass_hotels;
	while (true)
	{
		menu();
		int command;
		cout << "Введите команду: ";
		cin >> command;
		switch (command)
		{
		case 1:
		{
			class_hotels->input_hotels_by_console();
			break;
		}
		case 2:
		{
			class_hotels->show_hotels();
			system("Pause");
			break;
		}
		case 3:
		{
			ifstream fromfile("tofile.txt", ios::in);
			if (fromfile.is_open())
			{
				class_hotels->load_fr_file(fromfile);
				fromfile.close();
			}
			else cout << "Файл не удалось открыть" << endl;
			system("pause");
			break;
		}
		case 4:
		{
			ofstream tofile("tofile.txt", ios::out);
			if (tofile.is_open())
			{
				class_hotels->insert_in_file(tofile);
				tofile.close();
			}
			else cout << "Файл не удалось открыть" << endl;
			system("pause");
			break;
		}
		case 5:
		{
			class_hotels->delete_hotels();
			system("pause");
			break;
		}
		case 6:
		{
			return 0;
		}
		}
	}

}