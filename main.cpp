/*! \file main.cpp
	\brief program to test the class rhoumbus and its funcitonalities

	Details.
*/

#include<iostream>

#include "rhombus.h"

int main() 
{

	//test variables
	float dH1;
	float dV1;

	float dH2;
	float dV2;

	float side;

	float P;
	float A;

	Rhombus objA;
	Rhombus objB(4, 8);
	Rhombus objC = objB;

	objA.SetDim(5, 10);

	objA.SetHorD(6);

	objA.SetVerD(18);

	dH1 = objA.GetHorD();
	dV1 = objA.GetVerD();
	objA.GetDim(dH2, dV2);
	side = objA.GetSide();

	if (objC == objA) 
	{
		cout << "TEST - Differenti" << endl;
	}

	objC = objA;

	if (objC == objA) 
	{
		cout << "TEST - Uguali" << endl;
	}

	P = objA.GetPerimeter();
	A = objA.GetArea();
}