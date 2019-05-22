
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

bool FechaesValida(int dia, int mes, int anio)
{
	bool i;
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
	{
		i = 1;
	}
	if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
	{
		if (dia <= 30)
		{
			i = 1;
		}
		else
		{
			i = 0;
		}
	}
	if (mes == 2)
	{
		if (dia <= 29)
		{
			if (dia <= 28)
			{
				i = 1;
			}
			else
			{
				if (anio % 4 == 0)
				{
					if (anio % 100 == 0)
					{
						if (anio % 400 == 0)
						{
							i = 1;
						}
						else
						{
							i = 0;
						}
					}
					else
					{
						i = 1;
					}
				}
				else
				{
					i = 0;
				}
			}
		}
		else
		{
			i = 0;
		}
	}
	return i;
}

int main()
{
	int d, m, a;
	while (1)
	{
		cout << "Ingrese fecha\n";
		do {
			cout << "Dia: ";
			cin >> d;
		} while (d < 1 || d > 31);
		do {
			cout << "Mes: ";
			cin >> m;
		} while (m < 1 || m > 12);
		cout << "Anio: ";
		cin >> a;
		cout << endl;
		if (FechaesValida(d, m, a) == 1)
		{
			cout << "La fecha es valida";
		}
		else
		{
			cout << "La fecha no es valida";
		}
		cout << endl << endl;
	}
	_getch();
}

