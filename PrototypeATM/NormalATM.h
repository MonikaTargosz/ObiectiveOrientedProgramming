#pragma once
#include "BasicATM.h"
class NormalATM :
	public BasicATM{
public:
	NormalATM();
	~NormalATM();

	unsigned int shouldPrintAccountBalanse();
};

