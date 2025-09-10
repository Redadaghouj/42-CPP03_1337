#include "ClapTrap.hpp"
#include <iostream>

void testHeader(const std::string& testName) {
    std::cout << "\n\033[1;36m=== " << testName << " ===\033[0m" << std::endl;
}

int main() {
    testHeader("Test 1: Energy Point Management");
    {
        ClapTrap bot("CT-2");
        for (int i = 0; i < 12; i++) {
            bot.attack("Target2");
        }
    }

    testHeader("Test 2: Repair Limitations");
    {
        ClapTrap bot("CT-3");
        bot.takeDamage(10);
        bot.beRepaired(5);
    }

    testHeader("Test 3: Overkill Damage");
    {
        ClapTrap bot("CT-4");
        bot.takeDamage(5);
        bot.takeDamage(10);
        bot.attack("Target4");
    }

    testHeader("Test 4: Maximum Repair");
    {
        ClapTrap bot("CT-6");
        for (int i = 0; i < 12; i++) {
            bot.beRepaired(1);
        }
    }
    return 0;
}
