#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Skriplyuk_class_hotel
{
public:
	string name;
	int stars;
	void input_hotel_by_console();
	void show_hotel();
	void insert_into_file(ofstream& outfile);
	void load_from_file(ifstream& infile);
};




