#include <iostream>
#include<cstdlib>
#include<string>
#include <algorithm>
#include <ctime>
using namespace std;

void drawLine(int number, char symbol) {
	for (int i = 0; i <= number; i++) {
		cout << symbol;
	}
	cout << endl;
}
void Gamerules() {
	drawLine(80, '_');
	cout << "\n\t\t RULES OF THE GAME " << endl;
	drawLine(80, '_');
	cout << "\n\n";
	cout <<
		"1. You would be allowed to guess a number from 1 to 10" << endl <<
		"2. If you guess the correct number, you would win 10 times the amount you bet with" << endl <<
		"3. If you lose, You will loose the money you bet with" << endl;
	drawLine(80, '_');
	cout << "\n\n";
}
string user_name() {// receives username
	string name;
	cout << "Enter Your name : ";
	cin >> name;
	transform(name.begin(), name.end(), name.begin(), ::toupper);

	return name;
}
int User_balance() {// receives user money to start the game
	int balance;
	cout << "Enter the amount to start this game : $ ";
	cin >> balance;
	return balance;
}
int betAmount() { // receives user money, lol
	int amount;
	cout << "How much do you want to bet with  : $ ";
	cin >> amount;
	return amount;
}
int Guessing_number() {// makes sure the number guessed by user is btwn 1 and 10
	int number;
	cout << "Guess a number from 1 to 10 : ";
	cin >> number;
	while (number < 1 || number >10) {
		cout << "!!! YOU CAN ONLY ENTER NUMBERS BETWEEN 1 AND 10 !!!" << endl;
		cout << "Guess a number from 1 to 10 : " << endl;
		cin >> number;
	}
	return number;
}
int c_comp() {// computer guessed number 
	srand((time(0)));

	int max_number = 10;
	int min_number = 1;
	int random = (rand() % (max_number - min_number + 1) + min_number);
	return random;
}
bool playAgain() {
	char  answer;
	cout << " --> DO YOU WANT TO PLAY AGAIN (y/n) :" << endl;
	cin >> answer;

	while (answer != 'y' && answer != 'n') {
		cout << "!!!!You have entered the wrong input!!!!!" << endl << "\n\n";
		cout << " --> DO YOU WANT TO PLAY AGAIN (y/n) :" << endl;
		cin >> answer;
	}
	if (answer == 'y')
		return true;
	return false;
}

int main()
{

	drawLine(80, '_');
	cout << "\n\n\t\t \t\tCASINO GAME \n\n";
	drawLine(80, '_');
	cout << "\n";
	string name = user_name();
	system("cls");
	Gamerules();
	int balance = 0;
	balance = User_balance();



	do {
		system("cls");

		Gamerules();
		cout << name << ", your current balance is : $" << balance << endl;
		int amount = 0;
		amount = betAmount();
		int guessednumber = Guessing_number();
		int c_answer = c_comp();

		if (guessednumber == c_answer) {
			balance = amount * 10;
			cout << "You just won $" << amount * 10 << endl << name
				<< "Your new Balance is $ " << balance << endl;
		}
		else {
			balance -= amount;
			cout << "You guessed wrongly" << endl << "You just lost $ " << amount << endl <<
				"The correct answer is " << c_answer << endl << name <<
				",your current balance is = $" << balance << endl;
		}

		if (balance <= 0) {// askes for more money incase the money finishes
			char answer;
			cout << endl << " YOU HAVE EXHAUTED YOUR MONEY " << endl;
			cout << "--> Would you like to enter more money (y/n) :" << endl;
			cin >> answer;
			while (answer != 'y' && answer != 'n') {
				cout << "!!!You have entered the wrong input!!!" << endl;
				cout << "--> Would you like to enter more money (y/n) :" << endl;
				cin >> answer;
			}
			if (answer == 'y') {
				int newbalance = User_balance();
				balance = newbalance;
			}
		}

	} while (playAgain() && balance != 0);



	cout << "Thanks for your time";




}