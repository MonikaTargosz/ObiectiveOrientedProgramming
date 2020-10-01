#pragma once
#include "BasicATM.h"
class NormalATM :
	public BasicATM{
public:
	NormalATM(void);
	~NormalATM(void);
	unsigned int shouldPrintAccountBalanse();
	virtual std::string shouldDisplayServiceInfo();
};

