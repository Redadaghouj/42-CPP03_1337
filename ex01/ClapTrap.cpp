#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name(""),
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0)
{
	std::cout << "🤖 ClapTrap default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &obj) :
	_name(obj._name),
	_hitPoint(obj._hitPoint),
	_energyPoint(obj._energyPoint),
	_attackDamage(obj._attackDamage)
{
	std::cout << "🤖 ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	_name(name),
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0)
{
	std::cout << "🤖 ClapTrap " << _name << " constructed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "🤖 ClapTrap copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_hitPoint = obj._hitPoint;
		_energyPoint = obj._energyPoint;
		_attackDamage = obj._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoint == 0 || _energyPoint == 0)
		std::cout << "🤖 ClapTrap " << _name << " can't attack! ❌ No HP/EP left! 🪫 💀" << std::endl;
	else
	{
		--_energyPoint;
		std::cout
		<< "🤖 ClapTrap " << _name << " attacks " << target << "! 💥 Causing " << _attackDamage << " points of damage!"
		<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoint = _hitPoint <= amount ? 0 : (_hitPoint - amount);
	std::cout << "🤖 ClapTrap " << _name << " takes " << amount << " points of damage! 🩸 Now at " << _hitPoint << " HP" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint == 0 || _hitPoint == 0)
		std::cout << "🤖 ClapTrap " << _name << " fails to repair! ❌ No EP/HP left! 🪫 💀" << std::endl;
	else
	{
		--_energyPoint;
		_hitPoint += amount;
		std::cout << "🤖 ClapTrap repairs " << amount << " HP! Now at " << _hitPoint << " HP 🔋⚡" << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "🤖 ClapTrap " << _name << " destroyed!" << std::endl;
}
