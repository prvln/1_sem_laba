#include "f_action.h"

void MyFStream::show_file() {
	seekg(0);
	int i = 0;
	string s;
	while (std::getline(*this, s)){
		cout << i << "  " << s << "\n";
		i++;
	}
	fstream::clear();
}
void MyFStream::push_back() {
	seekp(ios_base::end);
	seekg(ios_base::end);
	string s;
	cout << "Write something to add at the end of file: ";
	getchar();
	std::getline(cin, s);
	*this << '\n' << s;
	flush();
}
void MyFStream::find() {
	seekg(0);
	string search;
	string buff;
	string s;
	int i = 0;
	int trigger = 0;
	cout << "Write something to search in the file: ";
	getchar();
	std::getline(cin, search);
	while (std::getline(*this, s)){
		buff = s;
		trigger = buff.find(search) + 1;
		if (trigger) {
			std::transform(s.begin(), s.end(), s.begin(), ::toupper);
			cout << i << " - " << s << "\n";
		}
		i++;
		trigger = 0;
	}
	fstream::clear();
}
void MyFStream::del(string file_name) {
	this->seekp(0 ,ios_base::beg);
	this->seekg(0 ,ios_base::beg);
	vector<string> arrr;
	string s;
	int search;
	cout << "Insert number of string to delete: ";
	cin >> search;
	int i = 0;
	while (std::getline(*this, s)) {
		//cout << i << " -- " << search << endl;
		if (i != search) {
			arrr.push_back(s);
			//cout << "Wow!\n";
		}
		i++;
	}
	fstream::clear();
	this->close();
	this->open(file_name, std::ios::in | std::ios::out | std::ios::trunc);
	this->seekp(0, ios_base::beg);
	this->seekg(0, ios_base::beg);
	for (int i = 0; i < arrr.size(); i++) {
		if (*this << arrr[i]) {
			*this << '\n';
			//cout << i << " -done- " << arrr[i] << '\n';
		}
		else {
			//cout << i << " -TRASh- " << arrr[i] << '\n';
		}
	}
	flush();
	fstream::clear();
}
void MyFStream::insert(string file_name) {
	seekp(0);
	seekg(0);
	int search;
	string stroka;
	char *arr = new char[100];
	cout << "Insert number of string: ";
	cin >> search;
	cout << "Insert string to insert: ";
	getchar();
	std::getline(cin, stroka);
	vector<string> arrr;
	string s;
	int j = 0;
	while (std::getline(*this, s)) {
		arrr.push_back(s);
		j++;
	}
	fstream::clear();
	this->close();
	this->open(file_name, std::ios::trunc | std::ios::in | std::ios::out);
	seekp(0);
	seekg(0);
	j = 0;
	for (int i = 0; i < arrr.size(); i++) {
		if (i == search) {
			*this << stroka;
			*this << '\n';
			continue;
		}
		*this << arrr[j];
		*this << '\n';
		j++;
	}
	flush();
	fstream::clear();
}