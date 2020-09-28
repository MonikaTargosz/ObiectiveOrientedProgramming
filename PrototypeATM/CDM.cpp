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
