
#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void operaciones(double rad)
{
	double area, perimetro;
	area = 3.14 * pow(rad, 2);
	perimetro = 3.14 * rad * 2;
	cout << "Area: " << area << " m^2" << endl;;
	cout << "Perimetro: " << perimetro << " m" << endl;
	return;
}

int main()
{

	double radio;
	do {
		cout << "Inserte radio en metros: ";
		cin >> radio;
	} while (radio < 0);
	operaciones(radio);
	_getch();
}