#include <iostream>
using std::cout;

#include <vector>

#include "Forma.h"
#include "Forma.cpp"

#include "Quadrado.h"
#include "Quadrado.cpp"


int main(int argc, char **argv)
{
	Forma *formaPtr;
	Quadrado *quadradoPtr;

	formaPtr = new Quadrado();	
	quadradoPtr = new Quadrado();
	cout << "Calculando a area\n";
	cout << "Atraves de formaPtr = new Quadrado\n";
	cout << formaPtr->calcArea( ) << '\n';
	cout << "Atraves de quadradoPtr = new Quadrado\n";
	cout << quadradoPtr->calcArea( ) << '\n';
	

	delete formaPtr;	
	delete quadradoPtr;	

	return 0;
}
