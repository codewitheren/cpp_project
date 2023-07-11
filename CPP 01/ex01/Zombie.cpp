/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:17:02 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 16:17:56 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "New zombie created " << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Zombie " << this->_name << " is dead" << std::endl;
}

void Zombie::announce(void){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
    this->_name = name;
}