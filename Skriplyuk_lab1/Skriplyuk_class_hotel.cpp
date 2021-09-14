#include "Skriplyuk_class_hotel.h"
#include <iostream>
#include <fstream>

using namespace std;


void Skriplyuk_class_hotel::input_hotel_by_console()
{
	cout << "������� �������� �����: ";
	cin >> name;
	cout << "������� ���������� ����� �����: ";
	cin >> stars;
}

void Skriplyuk_class_hotel::show_hotel()
{
	cout << "�������� �����: " << name << endl << "���������� �����: " << stars << endl;
}

void Skriplyuk_class_hotel::insert_into_file(ofstream& outfile)
{
	outfile << name << endl << stars << endl;
}

void Skriplyuk_class_hotel::load_from_file(ifstream& infile)
{
	infile >> name >> stars;
}