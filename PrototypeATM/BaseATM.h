#pragma once

class BaseATM
{
private:
	static unsigned int CorrectlyPin;
protected:
	static unsigned int AccountBalance;
	unsigned int MaxValueWithdrawal;
	bool locked;
public:
	BaseATM(void);
	~BaseATM(void);

	bool shouldVerifyPin(unsigned int TypedPin);
	bool shouldWithdrawCashWhenCorrectlyEnteredThePin(unsigned int ValueCash);

};
