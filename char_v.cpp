#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int vHeight;

	cout << "Enter height for V: ";
	cin >> vHeight;

	for (int i = 0; i < vHeight; i++) {
		for (int j = 0; j < vHeight*2; j++) {
			if (((i == j || i == ((vHeight - 1) * 2) - j) && i != vHeight - 1) || i == j) {
				cout << "*";
			} else {
				cout << " ";
			}
		}

		cout << endl;
	}

	return 0;
}
