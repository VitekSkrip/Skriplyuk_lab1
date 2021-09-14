#include "Skriplyuk_contclass_hotels.h"
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

void Skriplyuk_contclass_hotels::input_hotels_by_console()
{
	Skriplyuk_class_hotel hotel;
	hotel.input_hotel_by_console();
	hotels.push_back(hotel);
}


void Skriplyuk_contclass_hotels::show_hotels()
{
	if (hotels.size() > 0)
	{
		for (Skriplyuk_class_hotel& hotel : hotels)
			hotel.show_hotel();
	}
	else cout << "Вы не ввели ни одного отеля!" << endl;
}

void Skriplyuk_contclass_hotels::delete_hotels()
{
	if (hotels.size() > 0)
	{
		hotels.erase(hotels.begin(), hotels.end());

	}
	else cout << "Вы не ввели ни одного отеля!" << endl;
}

void Skriplyuk_contclass_hotels::insert_in_file(ofstream& outfile)
{
	outfile << hotels.size() << endl;
	for (Skriplyuk_class_hotel& hotel: hotels)
	{ 
		hotel.insert_into_file(outfile);
		//if (i == hotels.end() - 1)
			//outfile << i->name << endl << i->stars;
		//else
			//outfile << i->name << endl << i->stars << endl;
	}
}


void Skriplyuk_contclass_hotels::load_fr_file(ifstream& infile)
{
	
	int hotels_count;
	infile >> hotels_count;
	hotels.resize(hotels_count);
	for (Skriplyuk_class_hotel& hotel: hotels)
	{
		hotel.load_from_file(infile);
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
