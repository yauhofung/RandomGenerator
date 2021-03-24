#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// returns random bit
int generateBinary()
{
	return char(rand() % 2);
}

// returns random digit
int generateDecimal()
{
	return rand() % 10;
}

// returns random character
char generateCharacter()
{
	return rand() % 94 + 33;
}

// displays generator modes
void displayModeMenu()
{
	cout << "\n(0) Exit\n";
	cout << "(1) Binary\n";
	cout << "(2) Decimal\n";
	cout << "(3) Character\n";
	cout << "(4) File (WIP)\n";
	cout << "Select a generator mode: ";
}

// displays generator options
void displayGeneratorMenu()
{
	cout << "\n(0) Go Back\n";
	cout << "(1) Single\n";
	cout << "(2) Columns\n";
	cout << "(3) Unformatted\n";
	cout << "Note: Press Ctrl + C to terminate.\n";
	cout << "Select a generator option: ";
}

// processes mode and generator selections
void startGenerator(string mode, string generator)
{
	// single
	if (generator == "1")
	{
		// binary
		if (mode == "1")
		{
			cout << "Your random bit: " << generateBinary() << endl;
		}
		// decimal
		else if (mode == "2")
		{
			cout << "Your random digit: " << generateDecimal() << endl;
		}
		// character
		else if (mode == "3")
		{
			cout << "Your random character: " << generateCharacter() << endl;
		}
	}
	// columns
	else if (generator == "2")
	{
		while (true)
		{
			// binary
			if (mode == "1")
			{
				cout << generateBinary() << "	";
			}
			// decimal
			else if (mode == "2")
			{
				cout << generateDecimal() << "	";
			}
			// character
			else if (mode == "3")
			{
				cout << generateCharacter() << "	";
			}
		}
	}
	// unformatted
	else if (generator == "3")
	{
		while (true)
		{
			// binary
			if (mode == "1")
			{
				cout << generateBinary();
			}
			// decimal
			else if (mode == "2")
			{
				cout << generateDecimal();
			}
			// character
			else if (mode == "3")
			{
				cout << generateCharacter();
			}
		}
	}
}

// starts program
void startProgram()
{
	bool programLoop = true;
	while (programLoop)
	{
		displayModeMenu();
		string mode;
		getline(cin, mode);

		// exits program
		if (mode == "0")
		{
			programLoop = false;
		}

		// enters generator mode
		else if (mode == "1" || mode == "2" || mode == "3")
		{
			bool modeLoop = true;
			while (modeLoop)
			{
				displayGeneratorMenu();
				string generator;
				getline(cin, generator);

				// exits generator mode
				if (generator == "0")
				{
					modeLoop = false;
				}

				// starts random generator
				else if (generator == "1" || generator == "2" || generator == "3")
				{
					startGenerator(mode, generator);
				}

				// detects invalid generator
				else
				{
					cout << "Invalid option.\n";
				}
			}
		}

		// detects invalid mode
		else
		{
			cout << "Invalid mode.\n";
		}
	}
}

int main()
{
	srand(time(NULL));

	cout << "\n===== Fung's Random Generator =====\n";
	startProgram();
	cout << "Thanks for using Fung's Random Generator!\n";

	return 0;
}