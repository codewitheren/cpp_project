/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:05:55 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 19:23:36 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
    std::cout << "HumanB created : " << _name << std::endl;
}

HumanB::~HumanB(){
    std::cout << "HumanB " << _name << " dead" << std::endl;
}

void HumanB::attack(){
    std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
} 

void HumanB::setWeapon(Weapon &weapon){
    this->_weapon = &weapon;   
}