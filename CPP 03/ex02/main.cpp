/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:01:49 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/07 17:54:22 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap a("Eren");
    FragTrap a2(a);

    a.attack( "a Zombie" );
    a.takeDamage(10);
    a.beRepaired(10);
    a.highFivesGuys();
}