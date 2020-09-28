//BasicATM: can only withdraw cash and verify pin

//b) It should only know the current account balance and information whether the ATM is blocked.
//d) After withdrawing cash, the account balance must be updated, and the ATM must be blocked again.
//e) You cannot withdraw more than PLN 1,500 from a basic ATM.

#include "BaseATM.h"

unsigned int BaseATM::CorrectlyPin = 9876;
unsigned int BaseATM::AccountBalance = 10000;

BaseATM::BaseATM(void){
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
			locked = true;
			AccountBalance -= ValueCash; //should update the account balance after withdrawing cash
			return true;

		}
	}
}

