#include "pch.h"
#include "ClassMath.h"


ClassMath::ClassMath()
{
	wynik = 0;
}
ClassMath::~ClassMath()
{
}
void ClassMath::dodawanie(float a, float b)
{
	wynik = a + b;
}
void ClassMath::odejmowanie(float a, float b)
{
	wynik = a - b;
}
void ClassMath::mnozenie(float a, float b)
{
	wynik = a * b;
}
bool ClassMath::dzielenie(float a, float b) //bool
{
	if (b == 0)
		return false;
	wynik = a / b;
	return true;
}
float ClassMath::podajWynik() const //funkcja zwaracj¹ca wynik typu float
{
	return wynik;
}
