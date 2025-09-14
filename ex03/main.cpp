#include <iostream>
#include "DiamondTrap.hpp"

int main() {

    DiamondTrap dt_default;
    DiamondTrap dt1("DT-One");
    DiamondTrap dt_copy(dt1);
    DiamondTrap dt_assign;
    dt_assign = dt1;

    std::cout << "\n[ Attack Test ]\n";
    dt1.attack("Enemy");

    std::cout << "\n[ Repair Test ]\n";
    dt1.beRepaired(10);

    std::cout << "\n[ Energy Exhaustion Test ]\n";
    for (int i = 0; i < 50; i++)
        dt1.attack("Enemy");

    std::cout << "\n[ Damage / Death Test ]\n";
    dt1.takeDamage(100);
    dt1.takeDamage(50);
    dt1.attack("Enemy"); // should show cannot attack

    std::cout << "\n[ whoAmI Test ]\n";
    std::cout << "dt1: ";      dt1.whoAmI();
    std::cout << "dt_default: "; dt_default.whoAmI();
    std::cout << "dt_copy: ";    dt_copy.whoAmI();
    std::cout << "dt_assign: ";  dt_assign.whoAmI();

    return 0;
}
