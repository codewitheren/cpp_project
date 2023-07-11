/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:10:47 by muerdoga          #+#    #+#             */
/*   Updated: 2023/07/07 16:35:55 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0){
    std::cout << "[ClapTrap] " << this->_name << " is born" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "[ClapTrap] destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &tmp){
    *this = tmp;
    std::cout << "[ClapTrap] copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &tmp){
    std::cout << "[ClapTrap] " << this->_name << "copy assignment oparetor was called" << std::endl;
    this->_name = tmp._name;
    this->_hitPoint = tmp._hitPoint;
    this->_energyPoint = tmp._energyPoint;
    this->_attackDamage = tmp._attackDamage;
    return *this;
}

void ClapTrap::attack(const std::string &target){
    if(this->_energyPoint <= 0 || this->_hitPoint <= 0){
        std::cout << "[ClapTrap] " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "[ClapTrap] " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    this->_energyPoint -= 1;
} 

void ClapTrap::takeDamage(unsigned int amount){
    if(this->_hitPoint <= amount){
        std::cout << "[ClapTrap] "<< this->_name << " is dead" << std::endl;
        return;
    }
    std::cout << "[ClapTrap] " << _name << " takes " << amount << " damage!" << std::endl;
    this->_hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->_energyPoint <= 0){
        std::cout << "[ClapTrap] " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "[ClapTrap] " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
    this->_hitPoint += amount;
    this->_energyPoint -=1;
}
        
    