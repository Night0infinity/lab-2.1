// Lab_2.1.cpp
// < Курило, Любомир >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 8
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	z1 = pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1;
	z2 = sin(y + x) * sin(y - x);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
