#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value:";
	cin >> A;
	cout << "Please enter the second value: ";
	cin >> B;
	cout << endl;
}

void Addition(float& A, float& B, float& C) {
	C = A + B;
	cout << A << " + " << B << " = " << C << endl;
}

void Subtraction(float& A, float& B, float& C) {
	C = A - B;
	cout << A << " - " << B << " = " << C << endl;
}

void Multiplication(float& A, float& B, float& C) {
	C = A * B;
	cout << A << " * " << B << " = " << C << endl;
}

void Division(float& A, float& B, float& C) {
	C = A / B;
	cout << A << " / " << B << " = " << C << endl;
}
int main() {
	int choice;
	float A;
	float B;
	float C;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		Addition(A, B, C);
	}
	if (choice == 2) {
		Subtraction(A, B, C);
	}
	if (choice == 3) {
		Multiplication(A, B, C);
	}
	if (choice == 4) {
		Division(A, B, C);
	}
	return 0;
}
