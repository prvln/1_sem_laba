#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class knigga
{
public:
	enum Groups
	{

		NO_GROUP,
		FAMILY,
		FRIENDS,
		COLLEAGUES
	};
	struct Contact
	{
		string name;
		string phone;
		Groups group;
	};


	void del(vector<Contact>& list);
	void add(vector<Contact>& list);
	void show(vector<Contact>& list);
	void print(vector<Contact>& list);
	void load(vector<Contact>& list);
	void alter(vector<Contact>& list);
};

