/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:01:49 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/07 17:46:09 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ScavTrap A("Eren");
    ScavTrap B(A);
    
    A.attack("a Zombie");
    A.takeDamage(10);
    A.beRepaired(10);
    B.attack("a Zombie");
}