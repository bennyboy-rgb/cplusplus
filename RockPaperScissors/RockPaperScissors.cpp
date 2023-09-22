#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;


int compchoice() {
	srand(time(0));
	const int Max_value = 3; 
	const int Min_value = 1;

	int random = (rand() % (Max_value - Min_value+1)+ Min_value);

	return random;
}
int userchoice() {
	int choice;
	cout << "Enter : " << endl <<
		"(1) For Rock " << endl <<
		"(2) For Paper " << endl <<
		"(3) For Scissors" << endl;
	cin >> choice;
	while (choice <1 || choice >3)
	{
		cout << "Invalid Choice!! "<<endl;
		cout << "Enter : " << endl <<
			"(1) For Rock " << endl <<
			"(2) For Paper " << endl <<
			"(3) For Scissors" << endl;
		cin >> choice;

	}
	return choice;
}
void startGame() {
	int userinput;
	cout << "Would you love to play or Quit" << endl <<
		"Enter " << endl <<
		"(1) To play " << endl <<
		"(2) To Quit !! " << endl;
	cin >> userinput;
	while (userinput == 2) {
		cout << "Thank you for playing our game !!";
	}
}

string choices(int choice) {
	if (choice == 1) {
		return  "Rock ";
	}
	else if (choice == 2) {
		return  "Paper ";
	}
	else {
		return  "Scissors";
	}
	
}

bool playAgain() {
	int reply;
	cout << " Do you want to continue " << endl <<
		"Enter : " << endl <<
		"1. To Continue playing " << endl <<
		"2. To quit !!" <<endl;
	cin >> reply;
	while (reply < 1 || reply > 2) {
		cout << " Invalid input !!"<<endl;
		cout << " Do you want to continue " << endl <<
			"Enter : " << endl <<
			"1. To Continue playing " << endl <<
			"2. To quit !!" <<endl;
		cin >> reply;
	}

	if (reply == 1) {
		return true;
	}
	return false;
}
	

int main()
{
	int c_scores = 0;
	int u_scores = 0;
	startGame();
	do{
		
		
		int c_choice = compchoice();
		int u_choice = userchoice();

		cout << "COMPUTER :: USER" << endl;
		cout << choices(c_choice) << " :: " << choices(u_choice) << endl;
		if (u_choice == c_choice) {
			cout << " You drew the same number !!" <<endl;
		}
		else if (u_choice == 1 && c_choice == 2) {
			cout << "Computer wins !!" <<endl;
			c_scores++;
		}
		else if (u_choice == 2 && c_choice == 3) {
			cout << "Computer wins !!" <<endl;
			c_scores++;
		}
		else {
			cout << " You win !!<< endl";
			u_scores++;
		}
	} while (playAgain());

	system("cls");

	cout << " YOUR SCORE :: " << u_scores<<endl;
	cout << " COMPUTER SCORE :: " << c_scores << endl;
	system("pause");

}
