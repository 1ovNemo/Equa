#include "Equa.h"
#include <iostream>

int main() {

    Equa a;
    a.setX(14.26);
    a.setY(-1.22);
    a.setZ(3.5*pow(10,-2));
    a.solve();
    std::cout << "T = " << a.getT() << std::endl;

    informationAlerts(a);

    return 0;
}
