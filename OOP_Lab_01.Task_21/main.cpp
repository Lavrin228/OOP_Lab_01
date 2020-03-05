#include <iostream>
#include <cmath>
#include "Trigon.h"

using namespace std;

int main() 
{
	cout << "OOP Lab #01: Classes and Objects" << endl;
	system("chcp 1251");
	Trigon Trigon;
	Trigon.SetA(10);
	Trigon.SetB(7);
	Trigon.SetC(5);
	Trigon.Perimeter();
	Trigon.Area();
	Trigon.Angle_A_B();
	Trigon.Angle_A_C();
	Trigon.Angle_C_B();

}