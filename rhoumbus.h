/*! \file rhoumbus.h
	\brief Declaration of the class Rhoumbus

	Details.
*/


#ifndef RHOUMBUS_H
#define RHOUMBUS_H

#include <math.h>

using namespace std;

/// @class Rhoumbus
/// @brief to manage an object with the shape of a rhoumbus
class Rhoumbus 
{
private:

	int diagonalH;
	int diagonalV;

	float Side();

public:

	//default constructor
	Rhoumbus();

	// init constructor
	Rhoumbus(int dH, int dV);

	//copy constructor
	Rhoumbus(const Rhoumbus &r);

	//destructor
	~Rhoumbus();



	//overload operator =
	Rhoumbus& operator=(const Rhoumbus& r);

	//overload operator ==
	bool operator==(const Rhoumbus& r);



	//functions to set dimensions of the rhoumbus
	void SetHorD(int dH);
	void SetVerD(int dV);
	void SetDim(int dH, int dV);

	//functions to get dimensions of the rhoumbus
	int GetHorD();
	int GetVerD();
	void GetDim(int& dH, int& dV);

	//functions to calculate informations about the rhoumbus
	float GetArea();
	float GetPerimeter();
};

#endif
