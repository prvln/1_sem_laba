#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class f_action
{
public:
	void show_file(ifstream &file);
	void push_back(ofstream &file);
	void find_some(ifstream &file);
	void find_eliminate(fstream &file, string file_name);
	void vlez_pered(fstream &file, string file_name);
};

