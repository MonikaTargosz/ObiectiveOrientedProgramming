// CDM class inherits from a normal ATM and also has the option to deposit money.

#include "pch.h"
#include "CDM.h"


CDM::CDM(void):NormalATM(){
}


CDM::~CDM(void){
}

bool CDM::shouldDepositCash(unsigned int ValueCash) {
	if (locked == true)
		return false;
	else {
		AccountBalance += ValueCash;
		locked = true;
		return true;
	}
}

std::string CDM::shouldDisplayServiceInfo(){
	std::string infoATM = "\n Type: CDM\n";
	infoATM += "* Locked: \t" + (std::string)(locked ? "yes" : "no") + "\n";
	infoATM += "* Maximum value of withdrawal: \t" + std::to_string(MaxValueWithdrawal) + "\n";
	infoATM += "* Accountant balance: \t" + std::to_string(AccountBalance) + "\n\n";
	infoATM += "* Accountant balance: \tyes""\n";
	infoATM += "* Deposit: \tyes""\n\n";
	return infoATM;
}
