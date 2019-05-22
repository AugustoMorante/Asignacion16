
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

bool EsBisiesto(int a)
{
	bool i;
	if (a % 4 == 0)
	{
		if (a % 100 == 0)
		{
			if (a % 400 == 0)
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
	return i;
}

int main()
{
	while (1)
	{
		int anio;
		cout << "Inserte anio: ";
		cin >> anio;
		if (EsBisiesto(anio) == 1)
		{
			cout << "Si es Bisiesto." << endl;;
		}
		else
		{
			cout << "No es Bisiesto." << endl;;
		}
		cout << endl;
	}
	_getch();
}

