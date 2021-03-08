#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	int selection;

	bool loop = true;
	while (loop)
	{
		cout << "\nSelect a random generator:\n";
		cout << "(1) Single Digit\n";
		cout << "(2) Single Character\n";
		cout << "(3) Matrix Digits\n";
		cout << "(4) Matrix Characters\n";
		cout << "(5) Chaotic Digits\n";
		cout << "(6) Chaotic Characters\n";
		cout << "To terminate, press Ctrl + C. ";
		cin >> selection;

		// single digit
		if (selection == 1)
		{
			// 0 to 9
			cout << "Your random digit: " << rand() % 10 << "\n";
		}

		// single character
		else if (selection == 2)
		{
			// 32 to 126
			cout << "Your random character: " << char(rand() % 95 + 32) << "\n";
		}

		// matrix digits
		else if (selection == 3)
		{
			while (loop)
			{
				// 1-in-6 chance of printing a space
				if (rand() % 6 == 0)
				{
					cout << ' ';
				}
				else
				{
					// 0 to 9
					cout << rand() % 10;
				}
				cout << "	";
			}
		}

		// matrix characters
		else if (selection == 4)
		{
			while (loop)
			{
				// 1-in-6 chance of printing a space
				if (rand() % 6 == 0)
				{
					cout << ' ';
				}
				else
				{
					// 33 to 126
					cout << char(rand() % 94 + 33);
				}
				cout << "	";
			}
		}

		// chaotic digits
		else if (selection == 5)
		{
			while (loop)
			{
				// 0 to 9
				cout << rand() % 10;
			}
		}

		// chaotic characters
		else if (selection == 6)
		{
			while (loop)
			{
				// 32 to 126
				cout << char(rand() % 95 + 32);
			}
		}

		// invalid input
		else
		{
			cout << "Invalid selection.\n";
		}
	}

	return 0;
}