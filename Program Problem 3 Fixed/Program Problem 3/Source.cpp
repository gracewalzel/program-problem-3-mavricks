/*Aaron Pandain, Max Gerber, & Vikram Basude
Three Digit Ascend Descend Selection
Brief Discription - We wil use selection data types to put in order digits from a three digit number in ascending or descending order.
*/

// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h>  // gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std;

// Functions()
void pause() {
	
	cout << " Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	int user_numb; // Whle digit entered by the user
	int first_digit; // First digit in the three digit number
	int second_digit; // Second digit in the three digit number
	int third_digit; // Second digit in the three digit number
	
	cout << "Enter any positive 3 digit integer : ";
	cin >> user_numb;

	third_digit = user_numb % 10; // Finds third digit value
	second_digit = (user_numb / 10) % 10; // Finds second digit value
	first_digit = user_numb / 100; // Finds first digit value

	if (first_digit > second_digit && second_digit > third_digit) { // Accounts for digit values, if condition is met the comment is printed to computer (ascending order)
		cout << "The number is in Descending order.";
		}

	else if (first_digit < second_digit && second_digit < third_digit) { // Accounts for digit values, if condition is met the comment is printed to computer (descending order)
		cout << "The number is in Ascending order.";
	}

	else {
		cout << "The number is neither in Ascending or Descending order.";  // If neither conditions are met then this comment is printed
	}

	pause(); // pauses to see the displayed text

}
 



