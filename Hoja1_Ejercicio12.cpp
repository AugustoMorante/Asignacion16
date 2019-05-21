
#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

double areaCircunferencia(double rad)
{
	double area;
	area = 3.14 * pow(rad, 2);
	return area;
}

double perimetro(double rad)
{
	return 3.14 * rad * 2;
}

int main()
{

	double radio;
	do {
		cout << "Inserte radio en metros: ";
		cin >> radio;
	} while (radio < 0);
	cout << "Area: " << areaCircunferencia(radio) << " m^2" << endl;;
	cout << "Perimetro: " << perimetro(radio) << " m" << endl;
	_getch();
}