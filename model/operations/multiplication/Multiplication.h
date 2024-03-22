//
// Created by mathias.mourgues on 22/03/2024.
//

#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "../../operation/Operation.h"

class Multiplication: public Operation{
public:
    Multiplication(Expression *m_eg, Expression *m_ed)
        : Operation(m_eg, m_ed) {
    }

    ~Multiplication() override = default;

    void afficherNC() override;
    void afficherNPI() override;
    float calculer() override;
};



#endif //MULTIPLICATION_H
