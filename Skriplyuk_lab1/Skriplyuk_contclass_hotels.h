#pragma once
#include <iostream>
#include <fstream>
#include "Skriplyuk_class_hotel.h"
#include <vector>


class Skriplyuk_contclass_hotels
{
private:
	vector<Skriplyuk_class_hotel*> hotels;
public:
	void input_hotels_by_console();
	void show_hotels();
	void load_fr_file(ifstream& infile);
	void insert_in_file(ofstream& outfile);
	void delete_hotels();
};
