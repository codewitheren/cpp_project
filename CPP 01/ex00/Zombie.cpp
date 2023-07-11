/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:52:22 by muerdoga          #+#    #+#             */
/*   Updated: 2023/06/21 13:23:35 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
    std::cout << "New zombie created " << this->_name << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Zombie " << this->_name << " is dead" << std::endl;
}

void Zombie::announce(void){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}