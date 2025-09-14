#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("")
{
	ClapTrap::_name = "_clap_name";
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "💎 DiamondTrap default constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::_name = name + "_clap_name";
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "💎 DiamondTrap " << _name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	std::cout << "💎 DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "💎 DiamondTrap copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		ClapTrap::_name = obj._name + "_clap_name";
		_hitPoint = obj._hitPoint;
		_energyPoint = obj._energyPoint;
		_attackDamage = obj._attackDamage;
	}
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am 💎 DiamondTrap " << _name << " (🤖 ClapTrap name: " << ClapTrap::_name << ")" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "💎 DiamondTrap " << _name << " destroyed!" << std::endl;
}