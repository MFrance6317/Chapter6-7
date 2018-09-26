#include <iostream>
#include <time.h>
using namespace std;

//Pick a book 
//Author: 

int main()
{
	int pickBook = 0;
	int secretBook;
	int count = 0;
	int again;

	do {
	srand(time(NULL));
	secretBook = rand() % 57 + 1;

		cout << "Welcome to my chamber of coloring books " << endl;
		cout << "Don't be in here too long" << endl;
		cout << "You have to find the one book in here that hasn't been colored in so chose wisely." << endl;

		while (pickBook != secretBook && count != 2)
		{
			cout << "Chose your book by number: ";
			cin >> pickBook;

			if (pickBook < secretBook)
			{
				cout << "The number was too low" << endl;
			}
			else if (pickBook > secretBook)
			{
				cout << "The number was too high" << endl;
			}
			else if (pickBook == secretBook)
			{
				cout << "YAY uncolored coloring book!!!!" << endl;
			}
			count = count + 1;
		}
		if (count == 2)
		{
			cout << "FBI OPEN UP!!!!" << endl;
		}
		cout << "would you like to play again? 1= YES 2= NO" << endl;
		cin >> again;

		pickBook = 0;
		count = 0;

	} while (again != 2);

	system("pause");
	return 0;
}