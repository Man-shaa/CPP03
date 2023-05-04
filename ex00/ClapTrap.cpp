/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:37:06 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/04 14:56:51 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _attack(0)
{
	return ;
}

ClapTrap::~ClapTrap()
{
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy > 0)
	{
		std::cout << _name << " attacks " << target << ", causing "
		<< _attack << " points of damage !" << std::endl;
		_energy--;
	}
	else
	{
		std::cout << _name << " has not enough energy to attack " << target << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		std::cout << _name << " takes : " << amount << " points of damage" << std::endl;
		_hp -= amount;
	}
	else
		std::cout << _name << " is dead !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp > 0 && _energy > 0)
	{
		std::cout << _name << " repairs itself : " << amount << " points hp" << std::endl;
		_hp += amount;
	}
	else
	{
		if (_hp < 0)
			std::cout << _name << " is already dead !" << std::endl;
		else
			std::cout << _name << " has not enough energy to repair itself " << std::endl;
	}
}