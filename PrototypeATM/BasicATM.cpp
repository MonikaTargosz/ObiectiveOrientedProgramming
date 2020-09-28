//BasicATM: can only withdraw cash and verify pin
#include "pch.h"
#include "BasicATM.h"

unsigned int BasicATM::CorrectlyPin = 9876;
unsigned int BasicATM::AccountBalance = 10000;

BasicATM::BasicATM(void) {
	MaxValueWithdrawal = 1500; //is not possible to withdraw more than 1,500
}

BasicATM::~BasicATM(void) {
}

bool BasicATM::shouldVerifyPin(unsigned int TypedPin) {
	if (CorrectlyPin == TypedPin) {
		locked = false; //should unblocked ATM after Pin is correctly
		return true;
	}
	else {
		locked = true; //should blocked ATM after Pin is uncorrectly
		return false;
	}
}

bool BasicATM::shouldWithdrawCashWhenCorrectlyEnteredThePin(unsigned int ValueCash) {
	if (locked == true)
		return false;
	else {
		if (ValueCash > MaxValueWithdrawal || ValueCash > AccountBalance) {
			locked == true;
			return false;
		}
		else {
			locked = true; //ATM must be blocked again after withdrawing cash
			AccountBalance -= ValueCash; //should update the account balance after withdrawing cash
			return true;

		}
	}
}
