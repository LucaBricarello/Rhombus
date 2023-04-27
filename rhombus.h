/*! \file rhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef RHOMBUS_H
#define RHOMBUS_H

#include <math.h>

using namespace std;

/// @class Rhombus
/// @brief to manage an object with the shape of a Rhombus
class Rhombus 
{
private:

	float diagonalH;
	float diagonalV;

	float Side();

public:

	//default constructor
	Rhombus();

	// init constructor
	Rhombus(float dH, float dV);

	//copy constructor
	Rhombus(const Rhombus &r);

	//destructor
	~Rhombus();



	//overload operator =
	Rhombus& operator=(const Rhombus& r);

	//overload operator ==
	bool operator==(const Rhombus& r);



	//functions to set dimensions of the Rhombus
	void SetHorD(float dH);
	void SetVerD(float dV);
	void SetDim(float dH, float dV);

	//functions to get dimensions of the Rhombus
	float GetHorD();
	float GetVerD();
	void GetDim(float& dH, float& dV);
	float GetSide();

	//functions to calculate informations about the Rhombus
	float GetArea();
	float GetPerimeter();
};

#endif
