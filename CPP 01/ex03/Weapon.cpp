/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:31:37 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 17:26:17 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
    std::cout << "New weapon : " << this->_type << std::endl;
}

Weapon::Weapon(){
}

Weapon::~Weapon(){   
}

void Weapon::setType(std::string type){
    this->_type = type;
}

std::string& Weapon::getType(){
    return this->_type;
}