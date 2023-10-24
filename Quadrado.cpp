#include "Quadrado.h"

#include <iostream>
using std::cout;

Quadrado::Quadrado()
: Forma( )
{
    lado = 1.0;
    cout << "Criando quadrado.\n";
}

Quadrado::~Quadrado()
{
    cout << "Destruindo quadrado.\n";
}

void Quadrado::setLado( double lado )
{
    this->lado = lado < 0 ? 0 : lado;
}