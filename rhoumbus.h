#ifndef AAA
#define AAA

class Rhoumbus 
{
private:

	int diagonalH;
	int diagonalV;

	int Side();

public:

	Rhoumbus();
	Rhoumbus(int dH, int dL);
	Rhoumbus(const Rhoumbus &r);
	~Rhoumbus();

	Rhoumbus& operator=(const Rhoumbus& r);
	bool operator==(const Rhoumbus& r);
};

#endif
