// PrototypeATMProject.cpp : 


#include "pch.h"
#include "BasicATM.h"
#include "NormalATM.h"
#include "CDM.h"
#include "RFIDATM.h"
#include <iostream>

using namespace std;

int main()
{
	BasicATM *basicATM = new BasicATM;

	cout << "Basic ATM:\nCorrectly pin and unlock ATM (9987): " << (basicATM->shouldVerifyPin(9987) ? "yes" : "no") << endl;
	cout << "Correctly pin and unlock ATM (9876): " << (basicATM->shouldVerifyPin(9876) ? "yes" : "no") << endl;
	cout << "Withdraw cash (1501): " << (basicATM->shouldWithdrawCashWhenCorrectlyEnteredThePin(1501) ? "yes" : "no") << endl;
	basicATM->shouldVerifyPin(9876); // ATM was blocked by an unsuccessful operation
	cout << "Withdraw cash (1500): " << (basicATM->shouldWithdrawCashWhenCorrectlyEnteredThePin(1500) ? "yes" : "no") << endl << endl;

	NormalATM *normalATM = new NormalATM;

	cout << "Normal ATM:\nCorrectly pin and unlock ATM (9876): " << (normalATM->shouldVerifyPin(9876) ? "yes" : "no") << endl;
	cout << "Accountant balance: " << normalATM->shouldPrintAccountBalanse() << endl;
	normalATM->shouldVerifyPin(9876); // ATM was blocked by a successful operation
	cout << "Withdraw (2000): " << (normalATM->shouldWithdrawCashWhenCorrectlyEnteredThePin(2000) ? "yes" : "no") << endl;
	normalATM->shouldVerifyPin(9876); // ATM was blocked by a successful operation
	cout << "Accountant balance: " << normalATM->shouldPrintAccountBalanse() << endl << endl;

	CDM *cdm = new CDM;

	cout << "CDM\nCorrectly pin and unlock ATM (9876): " << (cdm->shouldVerifyPin(1234) ? "yes" : "no") << endl;
	cout << "Accountant balance: " << cdm->shouldPrintAccountBalanse() << endl;
	cdm->shouldVerifyPin(9876); // ATM was blocked by a successful operation
	cout << "Deposit (50): " << (cdm->shouldDepositCash(50) ? "yes" : "no") << endl;
	cdm->shouldVerifyPin(9876);
	cout << "Accountant balance: " << cdm->shouldPrintAccountBalanse << endl << endl;


	RFIDATM *RfidATM = new RFIDATM;

	cout << "RFID ATM\nWithdraw: " << (RfidATM->RFID() ? "yes" : "no") << endl;
	cout << "odblokowanie pin (1234) : " << (RfidATM->shouldVerifyPin(9876) ? "yes" : "no") << endl;
	cout << "stan konta: " << RfidATM->shouldPrintAccountBalanse() << endl;
	cout << "odblokowanie pin (1234) : " << (RfidATM->shouldVerifyPin(9876) ? "yes" : "no") << endl << endl;// ATM is unblocked
}


