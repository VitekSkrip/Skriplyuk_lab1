#include "Skriplyuk_class_hotel.h"
#include <iostream>
#include <fstream>

using namespace std;


void Skriplyuk_class_hotel::input_hotel_by_console()
{
	cout << "Введите название отеля: ";
	cin >> name;
	cout << "Введите количество звезд отеля: ";
	cin >> stars;
}

void Skriplyuk_class_hotel::show_hotel()
{
	cout << "Название отеля: " << name << endl << "Количество звезд: " << stars << endl;
}

void Skriplyuk_class_hotel::insert_into_file(ofstream& outfile)
{
	outfile << name << endl << stars << endl;
}

void Skriplyuk_class_hotel::load_from_file(ifstream& infile)
{
	infile >> name >> stars;
}