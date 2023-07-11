/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:33:28 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/07 17:49:44 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;

    std::cout << "[FragTrap] " << this->_name << " is born" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "[FragTrap] " << this->_name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys(){
    if(this->_energyPoint <= 0 || this->_hitPoint <= 0){
        std::cout << "[FragTrap] " << this->_name << " is out of energy" << std::endl;
        return;
    }
    std::cout << "[FragTrap] " << this->_name << " high fives" << std::endl;
    this->_energyPoint -= 1;
}