#include "Quadrado.h"

#include <iostream>
using std::cout;

Quadrado::Quadrado()
{
    lado = 1;
    cout << "Criando quadrado.\n";
}

Quadrado::~Quadrado()
{
    cout << "Destruindo quadrado.\n";
}
