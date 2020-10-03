#include "stdafx.h"
#include "CppUnitTest.h"
#include "BasicATM.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestBasicATM
{		
	TEST_CLASS(TBase)
	{
	public:

		TEST_METHOD(pin_corr)
		{
			BasicATM b;
			Assert::IsTrue(b.shouldVerifyPin(9876));
		}
		TEST_METHOD(pin_ncorr)
		{
			BasicATM b;
			Assert::IsFalse(b.shouldVerifyPin(9987));
		}

		TEST_METHOD(wypl_norm)
		{
			BasicATM b;
			b.shouldVerifyPin(9876);
			Assert::IsTrue(b.shouldWithdrawCashWhenCorrectlyEnteredThePin(1500));
		}
		TEST_METHOD(wypl_big)
		{
			BasicATM b;
			b.shouldVerifyPin(9876);
			Assert::IsFalse(b.shouldWithdrawCashWhenCorrectlyEnteredThePin(1501));
		}
		TEST_METHOD(wypl_ncorr)
		{
			BasicATM b;
			b.shouldVerifyPin(9987);
			Assert::IsFalse(b.shouldWithdrawCashWhenCorrectlyEnteredThePin(1500));
		}
	};
}