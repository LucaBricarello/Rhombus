/*! \file rhoumbus.cpp
	\brief class Rhoumbus: implementation of the functions

	Details.
*/

#include<iostream>
#include "rhoumbus.h"

/// @brief default constructor 
Rhoumbus::Rhoumbus() 
{

	cout << "Rhoumbus - constructor - default" << endl;

	diagonalH = 0;
	diagonalV = 0;

}

/// @brief init constructor 
/// @param dH horizontal diagonal dimension in pixels
/// @param dL horizontal diagonal dimension in pixels
Rhoumbus::Rhoumbus(int dH, int dV) 
{

	diagonalH = 0;
	diagonalV = 0;

	cout << "Rhoumbus - constructor" << endl;

	if (dH <= 0)
		cout << "WARNING: Rhoumbus - constructor: diagonalH should be > 0" << endl;
	else
		diagonalH = dH;

	if (dV <= 0)
		cout << "WARNING: Rhoumbus - constructor: diagonalV should be > 0" << endl;
	else
		diagonalV = dV;
}


/// @brief copy constructor
/// @param rhoumbus to copy passed by reference
Rhoumbus::Rhoumbus(const Rhoumbus& r)
{
	cout << "Rhoumbus - copy constructor" << endl;

	diagonalH = r.diagonalH;
	diagonalV = r.diagonalV;
}

/// @brief destructor 
Rhoumbus::~Rhoumbus() 
{

	cout << "Rhoumbus - destructor" << endl;

}

/// @brief overload operator =
/// @param Rhoumbus to be copied passed by reference (as a constant to block an eventual change to the object to be copied)
/// @return this object
Rhoumbus& Rhoumbus::operator=(const Rhoumbus& r)
{
	cout << "Rhoumbus - operator =" << endl;

	diagonalH = r.diagonalH;
	diagonalV = r.diagonalV;

	return *this;
}

/// @brief overload operator == (useful for if(obj1=obj2) construct, when are to obj equal? we have to decide it, obj1 is the caller, obj2 is called as a parameter)
/// @param Rhoumbus to check if it is equal to the rhoumbus that called == operator (as a constant to block an eventual change)
/// @return true if diagonalH and diagonalV of the two rhoumbus are equal, false otherwise (we decided the meaning of the operator ==)
bool Rhoumbus::operator==(const Rhoumbus& r)
{
	if (diagonalH == r.diagonalH && diagonalV == r.diagonalV)
	{
		return true;
	}
	return false;
}

/// @brief calculates the side of the rhoumbus with the two diagonals
/// @return side of the rhoumbus
float Rhoumbus::Side()
{
	return (float)sqrt(pow(diagonalH/2, 2) + pow(diagonalV / 2, 2));
}

/// @brief set diagonalH of the object
/// @param dH diagonalH to set in pixels
void Rhoumbus::SetHorD(int dH) 
{

	if (dH < 0) {
		cout << "WARNING: Rhoumbus - SetHorD: horizontal diagonal should be > 0" << endl;
		return;
	}

	diagonalH = dH;

}

/// @brief set diagonalV of the object
/// @param dV diagonalV to set in pixels
void Rhoumbus::SetVerD(int dV) 
{

	if (dV < 0) {
		cout << "WARNING: Rhoumbus - SetVerD: vertical diagonal should be > 0" << endl;
		return;
	}

	diagonalV = dV;

}

/// @brief set dimensions of the object
/// @param dH diagonalH to set in pixels
/// @param dV diagonalV to set in pixels
void Rhoumbus::SetDim(int dH, int dV) 
{

	SetHorD(dH);
	SetVerD(dV);

}

/// @brief get diagonalH of the object
/// @return diagonalH of the object
int Rhoumbus::GetHorD() 
{

	return diagonalH;

}

/// @brief get diagonalV of the object
/// @return diagonalV of the object
int Rhoumbus::GetVerD() 
{

	return diagonalV;

}

/// @brief get diagonalH and diagonalV of the object returning them in the given variables
/// @param given variable to return diagonalH in pixels
/// @param given variable to return diagonalV in pixels
void Rhoumbus::GetDim(int& dH, int& dV) 
{

	dH = diagonalH;
	dV = diagonalV;

	return;
}

/// @brief function to calculate the area of a rhoumbus
/// @return area of the given rhoumbus
float Rhoumbus::GetArea()
{
	return ((float)diagonalH * (float)diagonalV)/ (float)2;
}

/// @brief function to calculate the perimeter of a rhoumbus
/// @return perimeter of the given rhoumbus
float Rhoumbus::GetPerimeter()
{
	float side = Side();
	
	return (side * 4);
}