/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:46:15 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/07 16:34:13 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;

    std::cout << "[ScavTrap] " << this->_name << " created" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "[ScavTrap] " << this->_name << " destroyed" << std::endl;
}

void ScavTrap::attack(std::string const& target){
    if(this->_energyPoint <= 0 || this->_hitPoint <= 0){
        std::cout << "[ScavTrap] " << this->_name << " is out of energy" << std::endl;
        return;
    }
    std::cout << "[ScavTrap] " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    this->_energyPoint -= 1;
}

void ScavTrap::guardGate(){
    std::cout << "[ScavTrap] " << this->_name << "is now in Gate keeper mode" << std::endl;
}