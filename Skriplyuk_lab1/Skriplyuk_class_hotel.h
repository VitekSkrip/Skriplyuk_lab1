#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Skriplyuk_class_hotel
{
public:
	string name;
	int stars;
	void input_hotel_by_console(Skriplyuk_class_hotel& hotel);
	void show_hotel(const Skriplyuk_class_hotel& hotel);
	void insert_into_file(ofstream& outfile, const Skriplyuk_class_hotel& hotel);
	void load_from_file(ifstream& infile, Skriplyuk_class_hotel& hotel);
};




