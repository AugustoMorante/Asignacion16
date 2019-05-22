
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void orden(int *x1, int *x2)
{
	int menor, mayor;
	if (*x1 < *x2)
	{
		menor = *x1;
		mayor = *x2;
	}
	else
	{
		menor = *x2;
		mayor = *x1;
	}
	cout << "Nuevo orden: " << menor << " - " << mayor;
	return;
}

int main()
{
	int n1, n2;
	int *p1, *p2;
	cout << "Inserte primer numero: ";
	cin >> n1;
	cout << "Inserte segundo numero: ";
	cin >> n2;
	p1 = &n1; p2 = &n2;
	orden(p1, p2);
	_getch();
}
