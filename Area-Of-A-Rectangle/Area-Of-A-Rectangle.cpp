// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 10/22/19

#include <iostream>

using namespace std;

double getLength() {
	double lengthInput;
	
	do {
		cout << "Enter the length of the rectangle: ";
		cin >> lengthInput;

		if (lengthInput < 0) {
			cout << "Please enter a postive value for the length." << endl;
		}
	} while (lengthInput < 0);
	

	return lengthInput;
}

double getWidth() {
	double widthInput;

	do {
		cout << "Enter the width of the rectangle: ";
		cin >> widthInput;

		if (widthInput < 0) {
			cout << "Please enter a postive value for the width." << endl;
		}
	} while (widthInput < 0);

	return widthInput;
}

double getArea(double length, double width) {
	double areaCalculation;

	areaCalculation = length * width;

	return areaCalculation;
}

int displayData(double length, double width, double area) {
	cout << endl << "Rectangle Data:" << endl << "---------------" << endl << "Length: " << length << endl << "Width: " << width << endl << "Area: " << area << endl;
	return 0;
}

int main()
{
	double length,    // The rectangle's length
		width,     // The rectangle's width
		area;      // The rectangle's area

	bool isRunning = true;

	while (isRunning) {
		// Get the rectangle's length.
		length = getLength();

		// Get the rectangle's width.
		width = getWidth();

		// Get the rectangle's area.
		area = getArea(length, width);

		// Display the rectangle's data.
		displayData(length, width, area);

		bool userConfirm = false;
		string userInput;
		while (userConfirm == false) {
			cout << endl << "Would you like to run the program again? (Y/N): ";
			cin >> userInput;

			if (userInput == "Y" || userInput == "y") {
				cout << endl;
				userConfirm = true;
			}
			else if (userInput == "N" || userInput == "n") {
				userConfirm = true;
				isRunning = false;
			}
			else {
				cout << "Please enter a valid selection." << endl;
			}
		}
	}

	return 0;
}
