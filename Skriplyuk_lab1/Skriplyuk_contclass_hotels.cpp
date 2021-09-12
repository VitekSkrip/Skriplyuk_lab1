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
	if (hotels.size() > 0)
	{
		for (auto i = hotels.begin(); i != hotels.end(); ++i)
			cout << "Название отеля: " << i->name << endl << "Количество звезд: " << i->stars << endl;
	}
	else cout << "Вы не ввели ни одного отеля!" << endl;
}

void Skriplyuk_contclass_hotels::delete_hotels()
{
	if (hotels.size() > 0)
	{
		auto begin = hotels.begin();
		auto end = hotels.end();
		hotels.erase(begin, end);
	}
	else cout << "Вы не ввели ни одного отеля!" << endl;
	
}

void Skriplyuk_contclass_hotels::insert_in_file(ofstream& outfile)
{
	outfile << hotels.size() << endl;
	for (auto i=hotels.begin();i!=hotels.end(); ++i)
	{ 
		if (i == hotels.end() - 1)
			outfile << i->name << endl << i->stars;
		else
			outfile << i->name << endl << i->stars << endl;
	}
}


void Skriplyuk_contclass_hotels::load_fr_file(ifstream& infile)
{
	
	int hotels_count;
	infile >> hotels_count;
	hotels.resize(hotels_count);
	for (auto i=hotels.begin(); i != hotels.end(); ++i)
	{
		infile >> i->name >> i->stars;
	}
	

	//int i=0;
	//int hotels_count;
	//infile >> hotels_count;
	//hotels.resize(hotels_count);
	//while (!infile.eof())
	//{
	//infile >> hotels[i].name >> hotels[i].stars;
	//++i;


	//int i = 0;
	//int hotels_count;
	//infile >> hotels_count;
	//hotels.resize(hotels_count);
	//while (!infile.eof())
	//{
	//	infile >> hotels[i].name >> hotels[i].stars;
	//	++i;
	//}
}
