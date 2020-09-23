
#include "pch.h"
#include"Math.h"
#include "ClassMath.h"
#include <iostream>

using namespace std;

/* a) Napisanie funkcji obliczającej pierwiastki funkcji kwadratowej, która przyjmuje 3 parametry a, b, c oraz zwraca w parametrach dwie referencje &x1 oraz &x2 */
/* b) Postać funkcji kwadratowej */
/* c) Wprowadzanie parametrów oraz wyświetlanie wyników muszą zostać zaimplementowane w pętli głównej main(), a nie w funkcji liczącej pierwiastki kwadratowe */
/* d) Należy zwrócić uwagę na wszystkie ograniczenia parametrów wejściowych a, b i c */


int pierwiastki(float a, float b, float c, float& x1, float& x2); //&

int main()
{

	float a, b, c; //współczynniki
	float x1 = 0, x2 = 0; //pierwiastki

	cout << "Obliczone pierwiastki funkcji kwadratowej y = a*x^2 + b*x + c" << endl;
	cout << "Podaj a : ";
	cin >> a;
	cout << "Podaj b : ";
	cin >> b;
	cout << "Podaj c : ";
	cin >> c;

	//Obliczenie pierwiastków - zwrócić uwagę na referencję
	int obliczone_pierwiastki = pierwiastki(a, b, c, x1, x2);

	cout << "Obliczone " << obliczone_pierwiastki << " pierwiastki dla y = " << a << "*x^2 + " << b << "*x + " << c << endl;

	if (obliczone_pierwiastki >= 1) //wyswietlenie pierwiastkow
	{
		cout << "x1 = " << x1 << endl;
		if (obliczone_pierwiastki >= 2)
			cout << "x2 = " << x2 << endl;
	}

	// a) Stworzyć klasę CMath(lub wykorzystać generator klas PROJECT->Add Class).
	// b) Klasa powinna zawierać metody, które umożliwiają dodawanie, odejmowanie, mnożenie i dzielenie dwóch liczb.
	// c) Wynik powinien być przechowywany w polu klasy ‘wynik’ i możliwy do odczytu jedynie przez metodę GetWynik() const

	ClassMath k; // objekt

	cout << "Podaj dwa parametry:" << endl;
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;

	k.dodawanie(a, b); //obliczenia
	cout << a << "+" << b << " = " << k.podajWynik() << endl;
	k.odejmowanie(a, b);
	cout << a << "-" << b << " = " << k.podajWynik() << endl;
	k.mnozenie(a, b);
	cout << a << "*" << b << " = " << k.podajWynik() << endl;

	if (k.dzielenie(a, b)) 
		cout << a << "/" << b << " = " << k.podajWynik() << endl;
	else
		cout << "Nie można dzielić przez 0" << endl;


	system("pause");
	return 0;
}

//Funkcja licząca pierwiastki kwadratowe
int pierwiastki(float a, float b, float c, float& x1, float& x2)
{
	if (a == 0)
	{ //funkcja liniowa

		if (b != 0)
		{
			x1 = (-c) / b;
			return 1;
		}
		else
		{
			return 0;
		}

	}
	else
	{ //funkcja kwadratowa

		float delta = b * b - 4 * a*c; 

		if (delta < 0)
		{
			return 0;
		}
		else if (delta == 0)
		{
			x1 = (-b) / (2 * a);
			return 1;
		}
		else
		{
			x1 = ((-b) - sqrt(delta)) / (2 * a); // delta > 0 
			x2 = ((-b) + sqrt(delta)) / (2 * a); // delta > 0 
			return 2;
		}

	}
}


