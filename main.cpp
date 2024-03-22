#include <iostream>

#include "model/constante/Constante.h"
#include "model/operations/addition/Addition.h"
#include "model/operations/multiplication/Multiplication.h"

int main()
{
    Constante c1(5);
    Constante c2(3);
    Addition a1(&c1, &c2);
    Constante c3(2);
    Multiplication a2(&a1, &c2);
    a2.afficherNC();
    Constante r2 (a2.calculer());
    r2.afficherNC();

    return 0;
}
