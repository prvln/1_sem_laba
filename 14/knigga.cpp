#include "knigga.h"


void knigga::del(vector<Contact>& list) {
	string name_buf;
	int ioi = 1;
	while (ioi) {
		cout << "Insert name: ";
		getchar();
		getline(cin, name_buf);
		for (int i = 0; i < list.size(); i++) {
			if (list[i].name == name_buf) {
				list.erase(list.begin() + i);
				ioi = 0;
			}
		}
		if (ioi) {
			cout << "Name does not exists!";
		}
	}
}

void knigga::add(vector<Contact>& list) {
	string name_buf;
	string phone_buf;
	int group_buf;
	Groups G;
	getchar();
	int OK = 1;
	while (OK) {
		OK = 0;
		cout << "Insert name: ";
		//getchar();
		getline(cin, name_buf);
		for (int i = 0; i < list.size(); i++) {
			if (list[i].name == name_buf) {
				cout << "Contact with that name is already exists!\n";
				OK = 1;
			}
		}
	}
	cout << "Insert phone number: ";
	//getchar();
	getline(cin, phone_buf);
	OK = 1;
	while (OK) {
		cout << "Insert Group:\n1.NO_GROUP\n2.FAMILY\n3.FRIENDS\n4.COLLEAGUES\n";
		cin >> group_buf;
		switch (group_buf) {
		case 1: {
			G = NO_GROUP;
			OK = 0;
			break;
		}case 2: {
			G = FAMILY;
			OK = 0;
			break;
		}case 3: {
			G = FRIENDS;
			OK = 0;
			break;
		}case 4: {
			G = COLLEAGUES;
			OK = 0;
			break;
		}
		default: {
			cout << "Wrong Group";
			OK = 1;

		}
		}
		
	}
	list.push_back({ name_buf, phone_buf, G });
}

void knigga::show(vector<Contact>& list) {
	int action_show = 0;
	int OK = 1;
	while (OK) {
		cout << "Menu:\n1 Print(name)\n2 Print(Phone Number)\n3 Print All\n4 Print All in Group\n";
		getchar();
		cin >> action_show;
		OK = 0;
		switch (action_show) {

		default: {
			cout << "Wrong command \n";
			OK = 1;
		}

		case 1: {
			getchar();
			string name_buf;
			int OK_NAME = 1;
			while (OK_NAME) {
				cout << "Insert name: ";
				getline(cin, name_buf);
				for (int i = 0; i < list.size(); i++) {
					if (list[i].name == name_buf) {
						cout << "Name: " << list[i].name << " ";
						cout << "Phone: " << list[i].phone << " ";
						cout << "Group: ";
						switch (list[i].group) {
						case 0: {
							cout << "NO_GROUP";
							OK_NAME = 0;
							break;
						}case 1: {
							cout << "FAMILY";
							OK_NAME = 0;
							break;
						}case 2: {
							cout << "FRIENDS";
							OK_NAME = 0;
							break;
						}case 3: {
							cout << "COLLEAGUES";
							OK_NAME = 0;
							break;
						}
						}
						getchar();
						return;
					}
				}
				cout << "Contact with that name does not exist!\n";
			}
			break;
		}
		case 2: {
			getchar();
			string phone_buf;
			int OK_PHONE = 1;
			while (OK_PHONE) {
				cout << "Insert phone: ";
				getline(cin, phone_buf);
				for (int i = 0; i < list.size(); i++) {
					if (list[i].name == phone_buf) {
						cout << "Name: " << list[i].name << " ";
						cout << "Phone: " << list[i].phone << " ";
						cout << "Group: ";
						switch (list[i].group) {
						case 0: {
							cout << "NO_GROUP";
							OK_PHONE = 0;
							break;
						}case 1: {
							cout << "FAMILY";
							OK_PHONE = 0;
							break;
						}case 2: {
							cout << "FRIENDS";
							OK_PHONE = 0;
							break;
						}case 3: {
							cout << "COLLEAGUES";
							OK_PHONE = 0;
							break;
						}
						}
						getchar();
					}
				}
				if (OK_PHONE) {
					cout << "Contact with that phone number does not exist!\n";
				}
			}
			break;
		}
		case 3: {
			for (int i = 0; i < list.size(); i++) {
				cout << "Name: " << list[i].name << " ";
				cout << "Phone: " << list[i].phone << " ";
				cout << "Group: ";
				switch (list[i].group) {
				case 0: {
					cout << "NO_GROUP";
					break;
				}case 1: {
					cout << "FAMILY";
					break;
				}case 2: {
					cout << "FRIENDS";
					break;
				}case 3: {
					cout << "COLLEAGUES";
					break;
				}
				}
				cout << "\n";
			}
			break;
		}
		case 4: {
			int OK_GROUP = 1;
			while (OK_GROUP) {
				OK_GROUP = 0;
				cout << "Insert Group:\n1.NO_GROUP\n2.FAMILY\n3.FRIENDS\n4.COLLEAGUES\n";
				int Grop;
				cin >> Grop;
				switch (Grop) {
				case 1: {
					for (int i = 0; i < list.size(); i++) {
						if (list[i].group == NO_GROUP) {
							cout << "Name: " << list[i].name << " ";
							cout << "Phone: " << list[i].phone << " ";
							cout << "Group: ";
							switch (list[i].group) {
							case 0: {
								cout << "NO_GROUP";
								break;
							}case 1: {
								cout << "FAMILY";
								break;
							}case 2: {
								cout << "FRIENDS";
								break;
							}case 3: {
								cout << "COLLEAGUES";
								break;
							}
							}
							cout << "\n";
						}
					}
					break;
				}case 2: {
					for (int i = 0; i < list.size(); i++) {
						if (list[i].group == FAMILY) {
							cout << "Name: " << list[i].name << " ";
							cout << "Phone: " << list[i].phone << " ";
							cout << "Group: ";
							switch (list[i].group) {
							case 0: {
								cout << "NO_GROUP";
								break;
							}case 1: {
								cout << "FAMILY";
								break;
							}case 2: {
								cout << "FRIENDS";
								break;
							}case 3: {
								cout << "COLLEAGUES";
								break;
							}
							}
							cout << "\n";
						}
					}
					break;
				}case 3: {
					for (int i = 0; i < list.size(); i++) {
						if (list[i].group == FRIENDS) {
							cout << "Name: " << list[i].name << " ";
							cout << "Phone: " << list[i].phone << " ";
							cout << "Group: ";
							switch (list[i].group) {
							case 0: {
								cout << "NO_GROUP";
								break;
							}case 1: {
								cout << "FAMILY";
								break;
							}case 2: {
								cout << "FRIENDS";
								break;
							}case 3: {
								cout << "COLLEAGUES";
								break;
							}
							}
							cout << "\n";
						}
					}
					break;
				}case 4: {
					for (int i = 0; i < list.size(); i++) {
						if (list[i].group == COLLEAGUES) {
							cout << "Name: " << list[i].name << " ";
							cout << "Phone: " << list[i].phone << " ";
							cout << "Group: ";
							switch (list[i].group) {
							case 0: {
								cout << "NO_GROUP";
								break;
							}case 1: {
								cout << "FAMILY";
								break;
							}case 2: {
								cout << "FRIENDS";
								break;
							}case 3: {
								cout << "COLLEAGUES";
								break;
							}
							}
							cout << "\n";
						}
					}
					break;
				}
				default: {
					cout << "Wrong Group";
					OK_GROUP = 1;
				}
				}
			}
		}
		}
		getchar();
		getchar();
	}
}

void knigga::print(vector<Contact>& list) {
	string path_to_file;
	getchar();
	cout << "Insert file name: ";
	getline(cin, path_to_file);
	ofstream fout(path_to_file, ios_base::out | ios_base::trunc);
	if (fout.is_open())
	{
		fout << "Name Phone Group\n ";
		for (int i = 0; i < list.size(); i++) {
			fout << list[i].name << " " << list[i].phone << " ";
			switch (list[i].group) {
			case 0: {
				fout << "0 ";
				break;
			}case 1: {
				fout << "1 ";
				break;
			}case 2: {
				fout << "2 ";
				break;
			}case 3: {
				fout << "3 ";
				break;
			}
			}
			fout << "\n";
			cout << "done: " << i << endl;
		}
	}
	else {
		cout << "File does not exist!";
	}
	fout.close();
}

void knigga::load(vector<Contact>& list) {
	string path_to_file;
	string name_buf;
	string phone_buf;
	int group_buf;
	Groups G;
	getchar();
	cout << "Insert file name: ";
	getline(cin, path_to_file);
	ifstream fout(path_to_file);
	fout >> name_buf;
	fout >> name_buf;
	fout >> name_buf;
	do
	{
		fout >> name_buf;
		for (int i = 0; i < list.size(); i++) {
			if (list[i].name == name_buf) {
				return;
			}
		}
		fout >> phone_buf;
		fout >> group_buf;
		switch (group_buf) {
		case 0: {
			G = NO_GROUP;
			break;
		}case 1: {
			G = FAMILY;
			break;
		}case 2: {
			G = FRIENDS;
			break;
		}case 3: {
			G = COLLEAGUES;
			break;
		}
		}
		list.push_back({ name_buf, phone_buf, G });
	} while (!fout.eof());
	list.erase(list.end() - 1);
}

void knigga::alter(vector<Contact>& list) {
	string name_buf;
	int group_buf;
	Groups G;
	int ioi = -1;
	int action = 0;
	while (ioi == -1) {
		cout << "Insert name: ";
		getchar();
		getline(cin, name_buf);
		for (int i = 0; i < list.size(); i++) {
			if (list[i].name == name_buf) {
				ioi = i;
			}
		}
		if (ioi == -1) {
			cout << "Name does not exists!";
		}
	}
	cout << "What to do:\n1 Change name\n2 Change number\n3 Change group\n4 Exit\n ";
	cin >> action;
	switch (action) {
	case 1: {
		cout << "Write new name: ";
		getchar();
		getline(cin, list[ioi].name);
		break;
	}
	case 2: {
		cout << "Write new phone number: ";
		getchar();
		getline(cin, list[ioi].phone);
		break;
	}
	case 3: {
		int OK = 1;
		while (OK) {
			OK = 0;
			cout << "Insert new Group:\n1.NO_GROUP\n2.FAMILY\n3.FRIENDS\n4.COLLEAGUES\n";
			cin >> group_buf;
			switch (group_buf) {
			case 1: {
				G = NO_GROUP;
				break;
			}case 2: {
				G = FAMILY;
				break;
			}case 3: {
				G = FRIENDS;
				break;
			}case 4: {
				G = COLLEAGUES;
				break;
			}default: {
				cout << "Wrong group";
				OK = 1;
			}
			}
		}
		list[ioi].group = G;
		break;
		}
	case 4: {
		return;
	}
	}
	return;
}
