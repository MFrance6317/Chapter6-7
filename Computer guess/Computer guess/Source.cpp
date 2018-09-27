#include <iostream>
#include <time.h>
#include <string>
using namespace std;

int main()
{
	int secretNum;
	int userNum;
	int count = 0;
	string playAgain;

	srand(time(NULL));
	
	cout << "Pick a number between 1 and 100: ";
	cin >> userNum;
	if (userNum <= 100) {
		do {
			secretNum = rand() % 100 + 1;

			if (userNum == secretNum) {
				cout << "Good job!" << endl;

			}
			else if (userNum > secretNum) {
				cout << "Too low" << endl;
			}
			else if (userNum < secretNum) {
				cout << "Too high" << endl;
			}

			count++;
		} while (userNum != secretNum);
	}
	cout << "Want to play again? Yes No, number guessed equals " << count << endl;
	cin >> playAgain;
	if (playAgain == "Yes") {
		int main();
	}
	else
		cout << "Good Bye";
	system("pause");
	return 0;
}