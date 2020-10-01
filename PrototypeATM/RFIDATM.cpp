//RFIDATM: which has the option of an express withdrawal of PLN 50 using the contactless method, without the need to enter a pin. 
#include "pch.h"
#include "RFIDATM.h"


RFIDATM::RFIDATM():CDM(){
}


RFIDATM::~RFIDATM(){
}

bool RFIDATM::RFID() {// a separate method that does not take any parameters
	if (AccountBalance >= 50) {
		AccountBalance -= 50;
		return true;
	}
	else {
		return false;
	}
}

std::string RFIDATM::shouldDisplayServiceInfo(){
	std::string infoATM = "\n* type : CDM\n";
	infoATM += "* Locked: \t" + (std::string)(locked ? "yes" : "no") + "\n";
	infoATM += "* Maximum value of withdrawal: \t" + std::to_string(MaxValueWithdrawal) + "\n";
	infoATM += "* Accountant balance: \t" + std::to_string(AccountBalance) + "\n\n";
	infoATM += "* Accountant balance: \tyes""\n";
	infoATM += "* Deposit: \tyes""\n";
	infoATM += "* RFID: \tyes""\n\n";
	return infoATM;
}
