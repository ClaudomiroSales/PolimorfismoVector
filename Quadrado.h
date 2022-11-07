#ifndef QUADRADO_H
#define QUADRADO_H

#include "Forma.h"

class Quadrado : public Forma
{
public:
	Quadrado();
	~Quadrado();
	
	double calcArea( ) { return lado*lado; };

    void setLado(double);
	
private:
    double lado;

};

#endif // QUADRADO_H