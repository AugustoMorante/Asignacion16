
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void nNumero(int numero)
{
	int nuevoNumero, modulo;
	int residuo;
	int n = 1;
	do {
		modulo = 10 * n;
		nuevoNumero = numero % modulo;
		cout << nuevoNumero / n;
		n = n * 10;
	} while (modulo < numero);
	return;
}

int main()
{
    int numero;
	
	do {
		cout << "Inserte numero: ";
		cin >> numero;
	} while (numero < 1000);
	cout << "Nuevo numero: ";
	nNumero(numero);
	_getch();
}

