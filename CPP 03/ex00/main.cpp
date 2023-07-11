/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:01:49 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/07 16:38:54 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap A("Eren");
    
    A.attack("a Zombie");
    A.beRepaired(10);
    A.takeDamage(10);
}