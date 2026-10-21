/* Calculator Program
  Create a menu driven program
  that allows the user to select what arithmetic
  operation they wish to perform.
  -- display menu
  -- get users choice
  -- get two number from the user
  -- code for addition
  -- code for subtraction
  -- code for multiplication
  -- code for division
  -- code for modulo
  -- code for x power of y.
  --Display the result
*/

// function prototypes


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


#include <iostream>
#include <iomanip>
#include <string>
#include <random>


using namespace std;

int main() {
	int menuChoice;
	//Create a menu of choices.
	do {
		cout << "Please select the numbe of the operation you wish to perform" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Substraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "5. Modulo" << endl;
		cout << "6. Power" << endl;;
		cout << "7. Exit" << endl;;
		cout << string(10, '_') << endl;
		cin >> menuChoice;

		switch (menuChoice) {
		case 1: cout << "Addition" << endl;
			break;
		case 2: cout << "subtraction" << endl;
			break;
		case 3: cout << "Multiplication" << endl;
			break;
		case 4: cout << "Division" << endl;
			break;
		case 5: cout << "Modulo" << endl;
			break;
		case 6: cout << "Power" << endl;
			break;
		case 7: cout << "Exit" << endl;
			return 0;
		default: cout << "Please enter a valid choice" << endl;
		}
	} while (true);
