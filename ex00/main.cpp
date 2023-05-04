/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:36:47 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/04 16:00:38 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Naelle("Naelle");
	ClapTrap	Shanley("Shanley");

	Naelle.attack("Shanley le gros predateur");
	Shanley.takeDamage(3);
	Shanley.beRepaired(2);
}
