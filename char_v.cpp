#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int vHeight;

	cout << "Enter height for V: ";
	cin >> vHeight;

	// Height
	for (int row = 0; row < vHeight; row++) {
		// Width
		for (int col = 0; col < vHeight*2; col++) {
			// - if the row# and col# match or the row# matches the difference of
			// 	 the total columns and the current column (the current columns'
			//	 opposite in the current row), and not the last row
			// - the last row == col is to account for the last row, since it is
			//	 excluded from the earlier conditions
			//
			// If these conditions are met, * is printed; otherwise a space.
			if (((row == col || row == ((vHeight - 1) * 2) - col) && row != vHeight - 1) || row == col) {
				cout << "*";
			} else {
				cout << " ";
			}
		}

		cout << endl;
	}

	return 0;
}
