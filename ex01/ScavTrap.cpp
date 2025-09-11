#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "";
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "🛡️  ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "🛡️  ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "🛡️  ScavTrap " << _name << " constructed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "🛡️  ScavTrap copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_hitPoint = obj._hitPoint;
		_energyPoint = obj._energyPoint;
		_attackDamage = obj._attackDamage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (_hitPoint == 0 || _energyPoint == 0)
		std::cout << "🛡️  ScavTrap " << _name << " can't attack! ❌ No HP/EP left! 🪫 💀" << std::endl;
	else
	{
		--_energyPoint;
		std::cout
		<< "🛡️  ScavTrap " << _name << " attacks " << target << "! 💥 Causing " << _attackDamage << " points of damage!"
		<< std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "🛡️  ScavTrap " << _name << " is now in Gate keeper mode! 🚧" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "🛡️  ScavTrap " << _name << " destroyed!" << std::endl;
}
