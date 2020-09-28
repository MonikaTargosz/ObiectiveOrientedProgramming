//BasicATM: can only withdraw cash and verify pin

#include "BaseATM.h"

unsigned int BaseATM::CorrectlyPin = 9876;
unsigned int BaseATM::AccountBalance = 10000;

BaseATM::BaseATM(void){
	MaxValueWithdrawal = 1500; //is not possible to withdraw more than 1,500
}

BaseATM::~BaseATM(void){
}

bool BaseATM::shouldVerifyPin(unsigned int TypedPin){
	if (CorrectlyPin == TypedPin) {
		locked = false; //should unblocked ATM after Pin is correctly
		return true;
	}
	else {
		locked = true; //should blocked ATM after Pin is uncorrectly
		return false;
	}
}

bool BaseATM::shouldWithdrawCashWhenCorrectlyEnteredThePin(unsigned int ValueCash){
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

