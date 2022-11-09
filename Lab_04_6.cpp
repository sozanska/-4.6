// Lab_04_6.cpp
// Прізвище та ім'я автора
// Лабораторна робота №4.6
// Вкладені цикли.
// Варіант 4

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double P, S;
	int j, i;

	P = 1;
	j = 1;
	while (j <= 15)
	{
		S = 0;
		i = j;
		while (i <= j * j)

		{
			S += i * i;
			i++;

		}
		P *= sqrt(S);
		j++;
	}
	cout << P << endl;

	P = 1;
	j = 1;
	do
	{
		S = 0;
		i = j;
		do
		{
			S += i * i;
			i++;
		} while (i <= j * j);

		P *= sqrt(S);
		j++;
	} while (j <= 15);
	cout << P << endl;

	P = 1;
	for (j = 1; j <= 15; j++)
	{
		S = 0;
		for (i = j; i <= j * j; i++)

		{
			S += i * i;

		}
		P *= sqrt(S);
	}
	cout << P << endl;

	P = 1;
	for (j = 15; j >= 1; j--)
	{
		S = 0;
		for (i = j * j; i >= j; i--)

		{
			S += i * i;
		}
		P *= sqrt(S);
	}
	cout << P << endl;
	return 0;
}