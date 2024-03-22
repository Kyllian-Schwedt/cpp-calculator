//
// Created by mathias.mourgues on 22/03/2024.
//

#include "Addition.h"

#include <iostream>

void Addition::afficherNC() {
    std::cout << "(";
    get_eg()->afficherNC();
    std::cout << " + ";
    get_ed()->afficherNC();
    std::cout << ")\n";
}

void Addition::afficherNPI() {
    get_eg()->afficherNPI();
    std::cout << " ";
    get_ed()->afficherNPI();
    std::cout << " + ";
}

float Addition::calculer() {
    return get_eg()->calculer() + get_ed()->calculer();
}
