#include "knigga.h"

int main()
{
	knigga book;
	vector<knigga::Contact> list;
	while (1) {
		int action = 0;
		cout << "Menu:\n1 Add\n2 Delete\n3 Alter\n4 Print\n5 Save\n6 Load\n7 Exit\n|: ";
		cin >> action;
		switch (action) {

		default: continue;

		case 1: {
			book.add(list);
			break;
		}
		case 2: {
			book.del(list);
			break;
		}
		case 3: {
			book.alter(list);
			break;
		}
		case 4: {
			book.show(list);
			break;
		}
		case 5: {
			book.print(list);
			break;
		}
		case 6: {
			book.load(list);
			break;
		}
		case 7: {
			exit(0);
		}
		}
		system("cls");
	}
}
