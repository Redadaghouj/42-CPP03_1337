#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "";
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "🧩 FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "🧩 FragTrap " << _name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "🧩 FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "🧩 FragTrap copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_hitPoint = obj._hitPoint;
		_energyPoint = obj._energyPoint;
		_attackDamage = obj._attackDamage;
	}
	return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "🧩 FragTrap " << this->_name << " requests a positive high five! ✋" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "🧩 FragTrap " << _name << " destroyed!" << std::endl;
}