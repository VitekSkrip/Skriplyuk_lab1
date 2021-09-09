#include "Skriplyuk_class_hotel.h"
#include <iostream>
#include <fstream>

using namespace std;


void Skriplyuk_class_hotel::input_hotel_by_console(Skriplyuk_class_hotel& hotel)
{
	cout << "Введите название отеля: ";
	cin >> hotel.name;
	cout << "Введите количество звезд отеля: ";
	cin >> hotel.stars;
}

void Skriplyuk_class_hotel::show_hotel(const Skriplyuk_class_hotel& hotel)
{
	cout << "Название отеля: " << hotel.name << endl << "Количество звезд: " << hotel.stars << endl;
}

void Skriplyuk_class_hotel::insert_into_file(ofstream& outfile, const Skriplyuk_class_hotel& hotel)
{
	outfile << hotel.name << endl << hotel.stars << endl;
}

void Skriplyuk_class_hotel::load_from_file(ifstream& infile, Skriplyuk_class_hotel& hotel)
{
	infile >> hotel.name >> hotel.stars;
}