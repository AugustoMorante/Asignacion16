
#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

double areaCircunferencia(int rad)
{
	double area;
	area = 3.14 * pow(rad, 2);
	return area;
}

int main()
{

	int radio;
	do {
		cout << "Inserte radio en metros: ";
		cin >> radio;
	} while (radio < 0);
	cout << "Area: " << areaCircunferencia(radio) << " m^2";
	_getch();
}

