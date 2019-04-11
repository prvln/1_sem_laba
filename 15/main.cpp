#include "f_action.h"


int main()
{
	MyFStream thing;
	string file_name;
	
	

	do{
		cout << "Insert file name: ";
		cin >> file_name;
		thing.open(file_name, std::ios::in | std::ios::out | std::ios::app);
		if (!thing.is_open()) {
			cout << "Can't open file with that name\n";
		}
	} while (!thing.is_open());
	thing.show_file();

	thing.push_back();

	thing.show_file(); 

	thing.find();

	thing.del(file_name);

	thing.show_file();


	thing.insert(file_name);

	thing.show_file();
}