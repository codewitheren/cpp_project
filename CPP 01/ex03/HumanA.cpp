/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:52:53 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 17:46:04 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name){
    std::cout << "HumanA created : " << _name << std::endl;
}

HumanA::~HumanA(){   
    std::cout << "HumanA " << _name << " dead" << std::endl;
}

void HumanA::attack(){
    std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}


