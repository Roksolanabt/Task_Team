#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Calculator:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Exit\n";
}


int main() {

    int choice = 0, a, b;


    while (true) {
        displayMenu();
        cout << "Choose: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter a then b: ";
            cin >> a >> b;
        }

        switch (choice) {
        case 1:
            cout << "Result: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "Bye!" << endl;
            break;
    }

	cout << "\n\n\n";
	return 0;
}