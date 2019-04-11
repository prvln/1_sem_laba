#include <iostream>
#include <random>


using namespace std;

vector<int>arr;

void poor(int &player, int &komp, int i) {

	random_device rd;
	uniform_int_distribution<int> uid(2, 14); // generiruet znacheniya ot 2 do 14

	int bank = uid(rd);
		switch (bank) {
		case 2: {
			if (i == 0) { player += 2; }
			else { komp += 2; }
			break;
		}
		case 3: {

			if (i == 0) { player += 3; }
			else { komp += 3; }
			break;
		}
		case 4: {

			if (i == 0) { player += 4; }
			else { komp += 4; }
			break;
		}
		case 5: {

			if (i == 0) { player += 5; }
			else { komp += 5; }
			break;
		}
		case 6: {

			if (i == 0) { player += 6; }
			else { komp += 6; }
			break;
		}
		case 7: {

			if (i == 0) { player += 7; }
			else { komp += 7; }
			break;
		}
		case 8: {

			if (i == 0) { player += 8; }
			else { komp += 8; }
			break;
		}
		case 9: {

			if (i == 0) { player += 9; }
			else { komp += 9; }
			break;
		}
		case 10: {

			if (i == 0) { player += 10; }
			else { komp += 10; }
			break;
		}
		case 11: {

			if (i == 0) { player += 10; }
			else { komp += 10; }
			break;
		}
		case 12: {

			if (i == 0) { player += 10; }
			else { komp += 10; }
			break;
		}
		case 13: {

			if (i == 0) { player += 10; }
			else { komp += 10; }
			break;
		}
		case 14: {

			if (i == 0) { player += 11; }
			else { komp += 11; }
			break;
		}
		}
		if (i == 0) { arr.push_back(bank); }
}

void ShoW() {
	for (int i = 0; i < arr.size(); i++) {
		switch (arr[i]) {
		case 2: {cout << "2 "; break; }
		case 3: {cout << "3 "; break; }
		case 4: {cout << "4 "; break; }
		case 5: {cout << "5 "; break; }
		case 6: {cout << "6 "; break; }
		case 7: {cout << "7 "; break; }
		case 8: {cout << "8 "; break; }
		case 9: {cout << "9 "; break; }
		case 10: {cout << "10 "; break; }
		case 11: {cout << "J "; break; }
		case 12: {cout << "Q "; break; }
		case 13: {cout << "K "; break; }
		case 14: {cout << "A "; break; }
		}
	}
}

int main(int argc, char**argv) {
	int player = 0;
	int bank = 0;
	int komp = 0;
	int vibor = 1;
	

	poor(player, komp, 0);

	while (vibor) {
		poor(player, komp, 0);
		ShoW();
		poor(player, komp, 1);
		cout << " \nYour score: " << player << "\nOne more? 0/1 ";
		cin >> vibor;
	}
	if ((player <= 21 && player > komp) || (player <= 21 && komp > 21)) {
		cout << "You win\nYour score: " << player << "\nBank score: " << komp << "\n";
	}
	else {
		cout << "You lose\nYour score: " << player << "\nBank score: " << komp << "\n";
	}

	return 0;
}
