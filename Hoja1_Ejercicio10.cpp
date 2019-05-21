
#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void areaCircunferencia(int rad)
{
	double area;
	area = 3.14 * pow(rad, 2);
	cout << "Area: " << area << " m^2";
	return;
}

int main()
{

	int radio;
	do {
		cout << "Inserte radio en metros: ";
		cin >> radio;
	} while (radio < 0);
	areaCircunferencia(radio);
	_getch();
}

