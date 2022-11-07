#include "Quadrado.h"

#include <iostream>
using std::cout;

Quadrado::Quadrado()
{
    lado = 1;
}

Quadrado::~Quadrado()
{
    cout << "Destruindo quadrado.\n";
}
