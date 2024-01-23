#include <iostream>
#include <cmath>

using namespace std;


int main() 
{
	//definicija varijabli koje su nam potrebne
	string operation;
	string rez;
	double number1, number2;

	//unos korisnika
	cout << "Unesi prvi broj: ";
	cin >> number1;
	cout << "Unesi operaciju (+, -, *, /: )";
	cin >> operation;
	cout << "Unesi drugi broj: ";
	cin >> number2;

	//funkcija unosa i prikaz rezultata
	if (operation == "+") 
	{
		//cout << "Resenje je: ";
		cout << number1 + number2;
		cout << " je resenje";
		cin >> rez;
	}
	else if (operation == "-") 
	{
		//cout << "Resenje je: ";
		cout << number1 - number2;
		cout << " je resenje";
		cin >> rez;
	}
	else if (operation == "*")
	{
		//cout << "Resenje je: ";
		cout << number1 * number2;
		cout << " je resenje";
		cin >> rez;
	}
	else if (operation == "/") 
	{
		//cout << "Resenje je: ";
		cout << number1 / number2;	
		cout << " je resenje"; 
		cin >> rez;
	}
	else
	{
		cout << "Nisi uneo odgovarajucu operaciju ";
	}
	


	return 0;
}