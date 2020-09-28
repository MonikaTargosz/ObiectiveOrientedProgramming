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
