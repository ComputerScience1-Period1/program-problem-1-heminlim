/*
Hemin Lim September 22nd 2017 1st Period

Display Text
*/
// Libraries
#include <iostream>
#include <conio.h> // gives access to _kbhit()

// Namespaces
using namespace std;

// Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << "\n";

}

// MAIn
void main() {
	// Display Text
	cout << "Hello World! period 1" << endl; 
	;pause();
	// no system(""); commands anymore
}
