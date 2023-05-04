/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:07:46 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/04 16:48:22 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	protected:
		std::string	_name;
		int			_hp;
		int			_energy;
		int			_attack;

	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &toCopy);
		~ScavTrap();

		ScavTrap	&operator = (ScavTrap &toCopy);

		void		guardGate();
};

#endif