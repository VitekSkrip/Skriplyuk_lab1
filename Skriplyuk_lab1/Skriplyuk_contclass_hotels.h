#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include "Skriplyuk_class_hotel.h"
using namespace std;

class Skriplyuk_contclass_hotels
{
private:
	std::vector<Skriplyuk_class_hotel> hotels;
public:
	void input_hotels_by_console();
	void show_hotels();
	void load_fr_file(ifstream& infile);
	void insert_in_file(ofstream& outfile);
};
