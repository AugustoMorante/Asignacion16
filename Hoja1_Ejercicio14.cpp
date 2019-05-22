
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void intercambiar(int *nx, int *ny)
{
	int nuevoX, nuevoY;
	nuevoX = *ny;
	nuevoY = *nx;
	cout << "X = " << nuevoX << endl;
	cout << "Y = " << nuevoY << endl;
	return;
}

int main()
{
	int x, y;
	int *px, *py;
	while (1)
	{
		cout << "X = ";
		cin >> x;
		cout << "Y = ";
		cin >> y;
		px = &x;
		py = &y;
		cout << endl << "-------INTERCAMBIO-------" << endl << endl;
		intercambiar(px, py);
		cout << endl;
	}
	_getch();
}

