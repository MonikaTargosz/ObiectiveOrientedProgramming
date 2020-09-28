#pragma once

class BasicATM
{
private:
	static unsigned int CorrectlyPin;
protected:
	static unsigned int AccountBalance;
	unsigned int MaxValueWithdrawal;
	bool locked;
public:
	BasicATM(void);
	~BasicATM(void);

	bool shouldVerifyPin(unsigned int TypedPin);
	bool shouldWithdrawCashWhenCorrectlyEnteredThePin(unsigned int ValueCash);

};