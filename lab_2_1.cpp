// lab_2_1.cpp 
// Кузьмич Максим 
// Лабораторна робота № 2.1. 
// Лінійні програми. 
// Варіант 27

#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main()
{
	//double pi = 4 * atan(1.);
	double pi = numbers::pi;
	
	double a;
	//double z1;
	double z2;

	cout << "a = ";
	cin >> a;

	//z1 = pow(cos(3.0 / 8.0 * pi - a / 4.0), 2) - pow(cos(11.0 / 8.0 * pi + a / 4.0), 2);

	z2 = sqrt(2) / 2.0 * sin(a / 2.0);

	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
}
