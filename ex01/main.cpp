#include "ScavTrap.hpp"

int main()
{
	ScavTrap bot("ST-1");

	bot.attack("target");
	bot.takeDamage(30);
	bot.beRepaired(15);
	bot.guardGate();

	ScavTrap copy(bot);
	bot.guardGate();
	bot.takeDamage(35);
    return (0);
}
