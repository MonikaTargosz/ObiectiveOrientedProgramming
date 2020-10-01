//Normal ATM class inherits from the BasicATM

#include "pch.h"
#include "NormalATM.h"
#include<string.h>


NormalATM::NormalATM(void):BasicATM(){
	MaxValueWithdrawal = 10000; //protected field - limit
}


NormalATM::~NormalATM(void){
}

unsigned int NormalATM::shouldPrintAccountBalanse() {
	if (locked == 0)
		return 0;
	else {
		locked = true;
		return AccountBalance; //has the ability to display the account status
	}
}

std::string NormalATM::shouldDisplayServiceInfo(){
	std::string infoATM = "\n Type: Normal ATM\n";
	infoATM += "* Locked: \t" + (std::string)(locked ? "yes" : "no") + "\n";
	infoATM += "* Maximum value of withdrawal: \t" + std::to_string(MaxValueWithdrawal) + "\n";
	infoATM += "* Accountant balance: \t" + std::to_string(AccountBalance) + "\n\n";
	return infoATM;
}