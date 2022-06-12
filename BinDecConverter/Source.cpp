#include <iostream>
#include <cmath>

using namespace std;

int decToBinary(int n);
int binaryToDec(int n);

int main() {
	int selection;

	cout << "1: Convert Decimal to Binary" << endl;
	cout << "2: converty Binary to Decimal" << endl;
	cin >> selection;

	if (selection == 1) {
		int n, bin;
		cout << "Enter a decimal number: ";
		cin >> n;
		bin = decToBinary(n);
		cout << n << " in decimal = " << bin << " in binary" << endl;

	}
	else if (selection == 2) {
		int n, dec;
		cout << "enter a binary number: ";
		cin >> n;
		dec = binaryToDec(n);
		cout << n << " in binary = " << dec << " in decimal" << endl;

	}
	else
		cout << "Invalid Selection" << endl;

	return 0;
}

int decToBinary(int n) {
	int bin{ 0 }, i{ 1 }, rem;

	while (n != 0) {
		rem = n % 2;
		n /= 2;
		bin += rem * i;
		i *= 10;
	}
	return bin;
}

int binaryToDec(int n) {
	int dec{ 0 }, i{ 0 }, rem;

	while (n != 0) {
		rem = n % 10;
		n /= 10;
		dec += rem * pow(2, i);
		++i;
	}
	return dec;
}