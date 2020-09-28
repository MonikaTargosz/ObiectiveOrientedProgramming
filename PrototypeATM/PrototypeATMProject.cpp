// PrototypeATMProject.cpp : 


#include "pch.h"
#include "BasicATM.h"
#include <iostream>

using namespace std;

int main()
{
	BasicATM *basicATM = new BasicATM;

	cout << "[base]\n Correctly pin and unlock ATM (9987): " << (basicATM->shouldVerifyPin(9987) ? "yes" : "no") << endl;
	cout << "Correctly pin and unlock ATM (9876): " << (basicATM->shouldVerifyPin(9876) ? "yes" : "no") << endl;
	cout << "Withdraw cash (1501): " << (basicATM->shouldWithdrawCashWhenCorrectlyEnteredThePin(1501) ? "yes" : "no") << endl;
	basicATM->shouldVerifyPin(9876); // ATM was blocked by an unsuccessful operation
	cout << "Withdraw cash (1500): " << (basicATM->shouldWithdrawCashWhenCorrectlyEnteredThePin(1500) ? "yes" : "no") << endl << endl;
}


