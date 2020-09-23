#pragma once
class ClassMath
{
private:
	float wynik;
public:
	ClassMath();
	~ClassMath();

	void dodawanie(float a, float b); 
	void odejmowanie(float a, float b); 
	void mnozenie(float a, float b); 
	bool dzielenie(float a, float b);

	float podajWynik() const;

};
