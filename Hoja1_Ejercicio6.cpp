
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

double SolesaDolares(int x)
{
	return x * 0.30;
}

double DolaresaSoles(int x)
{
	return x * 3.33;
}

int main()
{
	int tipo;
	int dinero;
	cout << "Inserte tipo de cambio:\n";
	cout << "1.- Soles a Dolares\n";
	cout << "2.- Dolares a Soles\n";
	do {
		cout << ">> ";
		cin >> tipo;
	} while (tipo < 1 || tipo > 2);
	if (tipo == 1)
	{
		cout << "Inserte dinero a convertir: S/.";
		cin >> dinero;
		cout << "Dinero convertido: $" << SolesaDolares(dinero);
	}
	if (tipo == 2)
	{
		cout << "Inserte dinero a convertir: $";
		cin >> dinero;
		cout << "Dinero convertido: S/." << DolaresaSoles(dinero);
	}
	_getch();
}
