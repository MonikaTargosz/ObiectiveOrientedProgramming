#pragma once
#include "CDM.h"
class RFIDATM :
	public CDM
{
public:
	RFIDATM();
	~RFIDATM();
	bool RFID();
	virtual std::string shouldDisplayServiceInfo();
};

