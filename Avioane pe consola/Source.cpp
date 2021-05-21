#include <iostream>
#include <windows.h>
using namespace std;

char a[10][10], a2[10][10], b[10][10], b2[10][10];
int col, lin, x = 3, x1 = 0, x2 = 0;

void afisare(char a[10][10], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << " " << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	cout << endl << "---------------------------------" << endl;
	cout << "Project made by Emanuel Butoi" << endl;
	cout << "---------------------------------" << endl << endl;
	cout << "Airplanes" << endl;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			a[i][j] = '-';
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			a2[i][j] = '?';
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			b[i][j] = '-';
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			b2[i][j] = '?';
		}
	}

	cout << endl << endl << " Player no. 1 please give me the coordinates for the 3 airplanes" << endl;
	int w = 21;
	while (w) {
		cout << "[ line , column ]" << endl;
		cout << " line = ";
		cin >> lin;
		cout << "[ " << lin << " , column ]" << endl;
		cout << " column = ";
		cin >> col;
		cout << "[ " << lin << " , " << col << "]" << endl << endl;
		a[lin][col] = 'O';
		w--;
	}

	afisare(a, 10, 10);


	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	//Sleep(2000);

	cout << endl << endl << " Player no. 2 please give me the coordinates for the 3 airplanes" << endl;

	w = 21;
	while (w) {
		cout << "[ line , column ]" << endl;
		cout << " line = ";
		cin >> lin;
		cout << "[ " << lin << " , column ]" << endl;
		cout << " column = ";
		cin >> col;
		cout << "[ " << lin << " , " << col << "]" << endl << endl;
		b[lin][col] = 'O';
		w--;
	}


	afisare(b, 10, 10);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	//Sleep(2000);

	while (x) {
		afisare(b2, 10, 10);
		cout << endl << endl << " Player no.1 where should we strike? Give me the coordinates." << endl;
		cout << "[ line , column ]" << endl;
		cout << " line = ";
		cin >> lin;
		cout << "[ " << lin << " , column ]" << endl;
		cout << " column = ";
		cin >> col;
		cout << "[ " << lin << " , " << col << "]" << endl << endl;
		if (b[lin][col] == 'O') { cout << "You hit the airplane, Captain!" << endl; b2[lin][col] = 'X'; x1++; }
		else { cout << "You didn't hit the airplane, Captain!" << endl; b2[lin][col] = '-'; }
		afisare(b2, 10, 10);

		cout << endl << endl;

		afisare(a2, 10, 10);
		cout << endl << endl << " Player no.2 where should we strike? Give me the coordinates." << endl;
		cout << "[ line , column ]" << endl;
		cout << " line = ";
		cin >> lin;
		cout << "[ " << lin << " , column ]" << endl;
		cout << " column = ";
		cin >> col;
		cout << "[ " << lin << " , " << col << "]" << endl << endl;
		if (a[lin][col] == 'O') { cout << "You hit the airplane, Captain!" << endl; a2[lin][col] = 'X'; x2++; }
		else { cout << "You didn't hit the airplane, Captain!" << endl; a2[lin][col] = '-'; }
		afisare(a2, 10, 10);
		cout << endl << endl;

		if (x1 == x) { x = 0; cout << endl << "Player no. 1 won!" << endl; }
		else if (x2 == x) { x = 0; cout << endl << "Player no. 2 won!" << endl; }
	}

}