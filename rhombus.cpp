/*! \file rhombus.cpp
	\brief class Rhombus: implementation of the functions

	Details.
*/

#include<iostream>
#include "rhombus.h"

/// @brief default constructor 
Rhombus::Rhombus() 
{

	cout << "Rhombus - constructor - default" << endl;

	diagonalH = 0;
	diagonalV = 0;

}

/// @brief init constructor 
/// @param dH horizontal diagonal dimension
/// @param dL horizontal diagonal dimension
Rhombus::Rhombus(float dH, float dV)
{

	diagonalH = 0;
	diagonalV = 0;

	cout << "Rhombus - constructor" << endl;

	if (dH <= 0)
		cout << "WARNING: Rhombus - constructor: diagonalH should be > 0" << endl;
	else
		diagonalH = dH;

	if (dV <= 0)
		cout << "WARNING: Rhombus - constructor: diagonalV should be > 0" << endl;
	else
		diagonalV = dV;
}


/// @brief copy constructor
/// @param Rhombus to copy passed by reference
Rhombus::Rhombus(const Rhombus& r)
{
	cout << "Rhombus - copy constructor" << endl;

	diagonalH = r.diagonalH;
	diagonalV = r.diagonalV;
}

/// @brief destructor 
Rhombus::~Rhombus() 
{

	cout << "Rhombus - destructor" << endl;

}

/// @brief overload operator =
/// @param Rhombus to be copied passed by reference (as a constant to block an eventual change to the object to be copied)
/// @return this object
Rhombus& Rhombus::operator=(const Rhombus& r)
{
	cout << "Rhombus - operator =" << endl;

	diagonalH = r.diagonalH;
	diagonalV = r.diagonalV;

	return *this;
}

/// @brief overload operator == (useful for if(obj1=obj2) construct, when are to obj equal? we have to decide it, obj1 is the caller, obj2 is called as a parameter)
/// @param Rhombus to check if it is equal to the Rhombus that called == operator (as a constant to block an eventual change)
/// @return true if diagonalH and diagonalV of the two Rhombus are equal, false otherwise (we decided the meaning of the operator ==)
bool Rhombus::operator==(const Rhombus& r)
{
	if (diagonalH == r.diagonalH && diagonalV == r.diagonalV)
	{
		return true;
	}
	return false;
}

/// @brief calculates the side of the Rhombus with the two diagonals
/// @return side of the Rhombus
float Rhombus::Side()
{
	return (float)sqrt(pow(diagonalH/2, 2) + pow(diagonalV / 2, 2));
}

/// @brief set diagonalH of the object
/// @param dH diagonalH to set in pixels
void Rhombus::SetHorD(float dH)
{

	if (dH < 0) {
		cout << "WARNING: Rhombus - SetHorD: horizontal diagonal should be > 0" << endl;
		return;
	}

	diagonalH = dH;

}

/// @brief set diagonalV of the object
/// @param dV diagonalV to set in pixels
void Rhombus::SetVerD(float dV)
{

	if (dV < 0) {
		cout << "WARNING: Rhombus - SetVerD: vertical diagonal should be > 0" << endl;
		return;
	}

	diagonalV = dV;

}

/// @brief set dimensions of the object
/// @param dH diagonalH to set in pixels
/// @param dV diagonalV to set in pixels
void Rhombus::SetDim(float dH, float dV)
{

	SetHorD(dH);
	SetVerD(dV);

}

/// @brief get diagonalH of the object
/// @return diagonalH of the object
float Rhombus::GetHorD()
{

	return diagonalH;

}

/// @brief get diagonalV of the object
/// @return diagonalV of the object
float Rhombus::GetVerD()
{

	return diagonalV;

}

/// @brief get diagonalH and diagonalV of the object returning them in the given variables
/// @param given variable to return diagonalH in pixels
/// @param given variable to return diagonalV in pixels
void Rhombus::GetDim(float& dH, float& dV)
{

	dH = diagonalH;
	dV = diagonalV;

	return;
}

/// @brief get side of the object
/// @return side of the object
float Rhombus::GetSide()
{
	return Side();
}

/// @brief function to calculate the area of a Rhombus
/// @return area of the given Rhombus
float Rhombus::GetArea()
{
	return ((float)diagonalH * (float)diagonalV)/ (float)2;
}

/// @brief function to calculate the perimeter of a Rhombus
/// @return perimeter of the given Rhombus
float Rhombus::GetPerimeter()
{
	float side = Side();
	
	return (side * 4);
}