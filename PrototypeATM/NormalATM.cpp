//Normal ATM class inherits from the BasicATM

#include "pch.h"
#include "NormalATM.h"


NormalATM::NormalATM(){
	MaxValueWithdrawal = 10000; //protected field - limit
}


NormalATM::~NormalATM()
{
}

unsigned int NormalATM::shouldPrintAccountBalanse() {
	if (locked == 0)
		return 0;
	else {
		locked = true;
		return AccountBalance; //has the ability to display the account status
	}
}