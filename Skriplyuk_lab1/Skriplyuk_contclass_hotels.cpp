#include "Skriplyuk_contclass_hotels.h"
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

void Skriplyuk_contclass_hotels::input_hotels_by_console()
{
	Skriplyuk_class_hotel* hotel = new Skriplyuk_class_hotel;
	hotel->input_hotel_by_console();
	hotels.push_back(hotel);
}


void Skriplyuk_contclass_hotels::show_hotels()
{
	if (hotels.size() > 0)
	{
		for (auto iter = hotels.begin(); iter != hotels.end(); iter++)
			(*iter)->show_hotel();
	}
	else cout << "Вы не ввели ни одного отеля!" << endl;
}

void Skriplyuk_contclass_hotels::delete_hotels()
{
	if (hotels.size() > 0)
	{
		for (auto iter = hotels.begin(); iter != hotels.end(); iter++)
			delete* iter;
		hotels.clear();
	}
	else cout << "Вы не ввели ни одного отеля!" << endl;
}

void Skriplyuk_contclass_hotels::insert_in_file(ofstream& outfile)
{
	outfile << hotels.size() << endl;
	for (auto iter = hotels.begin(); iter != hotels.end(); iter++)
		(*iter)->insert_into_file(outfile);
}


void Skriplyuk_contclass_hotels::load_fr_file(ifstream& infile)
{
	
	int hotels_count;
	infile >> hotels_count;
	for (int i=0;i!=hotels_count;i++)
	{
		Skriplyuk_class_hotel* hotel = new Skriplyuk_class_hotel;
		hotel->load_from_file(infile);
		hotels.push_back(hotel);
	}
}
