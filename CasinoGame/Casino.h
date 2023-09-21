#pragma once
#include <iostream>
using namespace std;

class Casino
{
private:
	string Name;
	int Balance;
public:
	Casino(string _name, int _balance) {
		_name = Name;
		_balance = Balance;
	};

	void game_start() {
		cout <<
			"======================================================" << endl <<
			"+++++++++ WELCOME TO OUR CASINO GUESSING GAME ++++++++" << endl <<
			"======================================================" << endl <<
			"HERE IS HOW IT ALL GOES !!" << endl <<
			"PLAYER ENTERS THEIR NAME" << endl <<
			"ASKED FOR AMOUNT TO START THE GAME WITH " << endl <<
			"IF YOU WIN THE PRICE IS X10 OF THE AMOUNT YOU STAKE FOR BETTING :)" << endl <<
			"======================================================" << endl
			<< endl << endl;
	}


};

