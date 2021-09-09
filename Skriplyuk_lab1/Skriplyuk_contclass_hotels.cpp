#include "Skriplyuk_contclass_hotels.h"
#include "Skriplyuk_class_hotel.h"
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

void Skriplyuk_contclass_hotels::input_hotels_by_console()
{
	Skriplyuk_class_hotel hotel;
	cout << "Введите название отеля: ";
	cin >> hotel.name;
	cout << "Введите количество звезд отеля: ";
	cin >> hotel.stars;
	hotels.push_back(hotel);
}

void Skriplyuk_contclass_hotels::show_hotels()
{
	for (int i = 0; i < hotels.size(); ++i)
		cout << "Название отеля: " << hotels[i].name << endl << "Количество звезд: " << hotels[i].stars << endl << endl;
}


void Skriplyuk_contclass_hotels::insert_in_file(ofstream& outfile)
{
	outfile << hotels.size() << endl;
	for (int i = 0; i < hotels.size(); ++i)
	{ 
		if (i == hotels.size() - 1)
			outfile << hotels[i].name << endl << hotels[i].stars;
		else
			outfile << hotels[i].name << endl << hotels[i].stars << endl;
	}
}


void Skriplyuk_contclass_hotels::load_fr_file(ifstream& infile)
{
	/*
	int hotels_count;
	infile >> hotels_count;
	hotels.resize(hotels_count);
	for (int i=0; i < hotels_count; ++i)
	{
		infile >> hotels[i].name >> hotels[i].stars;
	}
	*/

	int i = 0;
	int hotels_count;
	infile >> hotels_count;
	hotels.resize(hotels_count);
	while (!infile.eof())
	{
		infile >> hotels[i].name >> hotels[i].stars;
		++i;
	}
}
