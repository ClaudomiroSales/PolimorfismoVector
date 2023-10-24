#include "Quadrado.h"

#include <iostream>
using std::cout;

Quadrado::Quadrado()
:Forma(1)
{
    lado = 1;
    cout << "Criando quadrado. Forma(1)\n";
}

Quadrado::~Quadrado()
{
    cout << "Destruindo quadrado.\n";
}

void Quadrado::setLado( double lado )
{
    this->lado = lado < 0 ? 0 : lado;
}