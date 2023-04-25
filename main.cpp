/*! \file main.cpp
	\brief program to test the class rhoumbus and its funcitonalities

	Details.
*/

#include<iostream>

#include "rhoumbus.h"

int main() 
{

	//test variables
	int dH1;
	int dV1;

	int dH2;
	int dV2;

	float P;
	float A;

	Rhoumbus objA;
	Rhoumbus objB(4, 8);
	Rhoumbus objC = objB;

	objA.SetDim(5, 10);

	objA.SetHorD(6);

	objA.SetVerD(18);

	dH1 = objA.GetHorD();
	dV1 = objA.GetVerD();
	objA.GetDim(dH2, dV2);

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