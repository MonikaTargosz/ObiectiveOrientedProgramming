#pragma once
#include "NormalATM.h"
class CDM :
	public NormalATM
{
public:
	CDM(void);
	~CDM(void);
	bool shouldDepositCash(unsigned int ValueCash);
};

