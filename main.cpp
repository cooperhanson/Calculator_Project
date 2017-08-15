#include <iostream> // standard cout && cin inputs

using namespace std;

main() // math calculator
{
	double var1, var2; // The two numbers you will be either adding, subtracting, ext..
	char Operator; // math opperations ( + , - , * / )
	char newprob; // your response to "Would you like to start a new problem? (Y/N)"
	int syntax; // if value = 0 then error code is shown
	syntax = 0; //no syntax errors

	do {                // code restarts from here if you answer (Y || y) to while stayment (newprob)
		system("cls");  //clears screen of prior data each loop

		cout << "Enter your first variable into the calculator: " << endl;
		cin >> var1;

		cout << "What math opperation do you want to preform?(enter sign): " << endl;
		cout << "[1] / + --- add" << endl; // you can either use the number 1 or the plus sign for easier use
		cout << "[2] / - --- subtract" << endl;
		cout << "[3] / * --- multiply" << endl;
		cout << "[4] / / --- divide" << endl;
		cin >> Operator;
		
		cout << "enter your second variable into the calculator" << endl;
		cin >> var2;

		system("cls");

		switch(Operator) // user declarred mathmatic operations variable
		{
			case '+':
				cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
				break;
			case '1':
				cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl; //same as above just redone for [1] input
				break;
			case '-':
				cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
			case '2':
				cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
				break;
			case '*':
				cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
				break;
			case '3':
				cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
				break;
			case '/':
				if (var2 != 0)
					cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
				else
					cout << "Invalid, you cannot divide by 0." << endl;
			case '4':
				if (var2 != 0)
					cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
				else
					cout << "Invalid, you cannot divide by 0." << endl;
				break;
			default:
				syntax = 1; // sets error code
		}

			if ( syntax == 0 ) 
				cout << "Would you like to start a new problem? (Y/N)" << endl;
				cin >> newprob;

	} while (newprob == 'y' || newprob == 'Y'); // start over at do possition if anthing other than (y || Y) is entered

		{
		system("cls");
		if ( syntax == 1 )
			cout << "Sytax error try restarting program. Invalid entry: " << var1 << " " << Operator << " " << var2 << endl;
		else
			cout << "Thank you for choosing the Calculator Express! Press enter to close now." << endl;
		}

	return 0;
}
