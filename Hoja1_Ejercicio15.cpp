
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

double Combinatorio(int fN, int fK, int fNK)
{
	double comb;
	comb = fN / (fK * fNK);
	return comb;
}

double C(int N, int K)
{
	int factorialN = 1, factorialK = 1, factorialNK = 1;
	int i = 1;
	do
	{
		factorialN = factorialN * i;
		i++;
	} while (i <= N);
	i = 1;
	do
	{
		factorialK = factorialK * i;
		i++;
	} while (i <= K);
	i = 1;
	do
	{
		factorialNK = factorialNK * i;
		i++;
	} while (i <= (N - K));
	return Combinatorio(factorialN, factorialK, factorialNK);
}

int main()
{
	int n, k;
	do
	{
		cout << endl;
		cout << "N = ";
		cin >> n;
		cout << "K = ";
		cin >> k;
	} while (n <= k);
	cout << "Combinatorio = " << C(n, k) << endl;
	_getch();
}
