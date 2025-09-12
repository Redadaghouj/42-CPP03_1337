#include "FragTrap.hpp"

int main()
{
	FragTrap bot("FT-1");

	bot.attack("target");
	bot.takeDamage(30);
	bot.beRepaired(15);
	bot.highFivesGuys();

	FragTrap copy(bot);
	bot.highFivesGuys();
	bot.takeDamage(35);
    return (0);
}
