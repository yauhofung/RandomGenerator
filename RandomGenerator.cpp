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

// displays random generator modes
void displayModeMenu()
{
	cout << "\n(0) Exit\n";
	cout << "(1) Binary\n";
	cout << "(2) Decimal\n";
	cout << "(3) Character\n";
	cout << "(4) File (WIP)\n";
	cout << "Select a mode: ";
}

// displays random generator options
void displayGeneratorMenu()
{
	cout << "\n(0) Go Back\n";
	cout << "(1) Single\n";
	cout << "(2) Columns\n";
	cout << "(0) Unformatted\n";
	cout << "Note: Press Ctrl + C to terminate.\n";
	cout << "Select a random generator: ";
}

int main()
{
	srand(time(NULL));

	cout << "\n===== Fung's Random Generator =====\n";

	bool modeLoop = true;
	while (modeLoop)
	{
		displayModeMenu();
		int mode;
		cin >> mode;

		// program exit
		if (mode == 0)
		{
			modeLoop = false;
		}

		// binary mode
		else if (mode == 1)
		{
			bool generatorLoop = true;
			while (generatorLoop)
			{
				displayGeneratorMenu();
				int generator;
				cin >> generator;

				// binary mode exit
				if (generator == 0)
				{
					generatorLoop = false;
				}

				// single binary
				else if (generator == 1)
				{
					cout << "Your random bit: " << generateBinary() << endl;
				}

				// binary columns
				else if (generator == 2)
				{
					while (true)
					{
						cout << generateBinary() << "	";
					}
				}

				// unformatted binaries
				else if (generator == 3)
				{
					while (true)
					{
						cout << generateBinary();
					}
				}

				// invalid generator
				else
				{
					cout << "Invalid option.\n";
				}
			}
		}

		// decimal mode
		else if (mode == 2)
		{
			bool generatorLoop = true;
			while (generatorLoop)
			{
				displayGeneratorMenu();
				int generator;
				cin >> generator;

				// decimal mode exit
				if (generator == 0)
				{
					generatorLoop = false;
				}

				// single decimal
				else if (generator == 1)
				{
					cout << "Your random digit: " << generateDecimal() << endl;
				}

				// decimal columns
				else if (generator == 2)
				{
					while (true)
					{
						cout << generateDecimal() << "	";
					}
				}

				// unformatted decimals
				else if (generator == 3)
				{
					while (true)
					{
						cout << generateDecimal();
					}
				}

				// invalid generator
				else
				{
					cout << "Invalid option.\n";
				}
			}
		}

		// character mode
		else if (mode == 3)
		{
			bool generatorLoop = true;
			while (generatorLoop)
			{
				displayGeneratorMenu();
				int generator;
				cin >> generator;

				// character mode exit
				if (generator == 0)
				{
					generatorLoop = false;
				}

				// single character
				else if (generator == 1)
				{
					cout << "Your random character: " << generateCharacter() << endl;
				}

				// character columns
				else if (generator == 2)
				{
					while (true)
					{
						cout << generateCharacter() << "	";
					}
				}

				// unformatted characters
				else if (generator == 3)
				{
					while (true)
					{
						cout << generateCharacter();
					}
				}

				// invalid generator
				else
				{
					cout << "Invalid option.\n";
				}
			}
		}

		// invalid mode
		else
		{
			cout << "Invalid mode.\n";
		}
	}

	cout << "Thanks for using Fung's Random Generator!\n";

	return 0;
}